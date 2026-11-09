// tb_sys main loop with fork checkpoints (docs/sim.md, "Checkpoints"). The loop is Verilator's --main loop; when the
// bench calls ckpt_mark() (+CKPT_US) the process forks a frozen copy, the checkpoint server, which forks a replay
// for every request on its FIFO. A replay continues from the checkpoint with extra plusargs, in its own directory.
#include "verilated.h"
#include "Vtb_sys.h"
#include "Vtb_sys__Dpi.h"

#include <cerrno>
#include <climits>
#include <csignal>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fcntl.h>
#include <fstream>
#include <memory>
#include <string>
#include <sys/stat.h>
#include <unistd.h>
#include <vector>

#ifndef SIM_THREADS
#define SIM_THREADS 1
#endif

static bool g_mark = false;
static int g_role = 0;  // 0 no checkpoint yet, 1 the run that made it, 2 a replay
static std::vector<std::string> g_args;

void ckpt_mark() { g_mark = true; }
int ckpt_role() { return g_role; }

static std::string fd_path(int fd) {
#ifdef F_GETPATH
    char p[PATH_MAX];
    if (fcntl(fd, F_GETPATH, p) == 0) return p;
    return "";
#else
    char l[64], p[PATH_MAX];
    snprintf(l, sizeof l, "/proc/self/fd/%d", fd);
    const ssize_t n = readlink(l, p, sizeof p - 1);
    if (n <= 0) return "";
    p[n] = 0;
    return p;
#endif
}

// Give every open regular file this process its own file description: files read are reopened at the same offset
// (a forked copy shares offsets with its parent otherwise); files written are recreated under the same name in the
// current directory when to_cwd, so a replay writes its own trace.log and dumps.
static void reopen_files(bool to_cwd) {
    const int top = getdtablesize();
    for (int fd = 3; fd < top; fd++) {
        struct stat st;
        if (fstat(fd, &st) != 0 || !S_ISREG(st.st_mode)) continue;
        const std::string path = fd_path(fd);
        if (path.empty()) continue;
        const int fl = fcntl(fd, F_GETFL);
        int nfd = -1;
        if ((fl & O_ACCMODE) == O_RDONLY) {
            nfd = open(path.c_str(), O_RDONLY);
            if (nfd >= 0) lseek(nfd, lseek(fd, 0, SEEK_CUR), SEEK_SET);
        } else if (to_cwd) {
            const std::string base = path.substr(path.find_last_of('/') + 1);
            nfd = open(base.c_str(), O_WRONLY | O_CREAT | O_TRUNC | (fl & O_APPEND), 0644);
        } else {
            continue;
        }
        if (nfd < 0) {
            fprintf(stderr, "ckpt: cannot reopen %s: %s\n", path.c_str(), strerror(errno));
            _exit(1);
        }
        dup2(nfd, fd);
        close(nfd);
    }
}

static void redirect(int fd, const char* path, int flags) {
    const int n = open(path, flags, 0644);
    if (n >= 0) { dup2(n, fd); close(n); }
}

// The replay side of a request: own directory, own output files, the request's plusargs ahead of the original
// ones (the first match wins in $value$plusargs).
static void start_replay(VerilatedContext* ctx, const std::string& dir) {
    setpgid(0, 0);
    if (chdir(dir.c_str()) != 0) _exit(1);
    redirect(1, "sim.log", O_WRONLY | O_CREAT | O_TRUNC);
    dup2(1, 2);
    reopen_files(true);
    std::vector<std::string> args{g_args[0]};
    std::ifstream in("args");
    for (std::string a; in >> a;) args.push_back(a);
    args.insert(args.end(), g_args.begin() + 1, g_args.end());
    std::vector<const char*> argv;
    for (const auto& a : args) argv.push_back(a.c_str());
    ctx->commandArgs(static_cast<int>(argv.size()), argv.data());
    std::ofstream("pid") << getpid() << "\n";
    g_role = 2;
}

// Fork the checkpoint server. Returns in the run that made it (role 1, unless +CKPT_STOP ends it) and in every
// replay (role 2); the server itself only forks replays until it reads "quit".
static void checkpoint(VerilatedContext* ctx, Vtb_sys* top) {
    char cwd[PATH_MAX];
    if (!getcwd(cwd, sizeof cwd)) return;
    const std::string fifo = std::string(cwd) + "/ckpt.fifo";
    unlink(fifo.c_str());
    if (mkfifo(fifo.c_str(), 0600) != 0) { perror("ckpt: mkfifo"); return; }
    int ready[2];
    if (pipe(ready) != 0) return;
    fflush(nullptr);
    top->prepareClone();
    const pid_t pid = fork();
    if (pid < 0) { perror("ckpt: fork"); top->atClone(); return; }
    if (pid > 0) {
        close(ready[1]);
        char b;
        (void)!read(ready[0], &b, 1);  // the server has its own file offsets before this run moves on
        close(ready[0]);
        top->atClone();
        g_role = 1;
        fprintf(stderr, "ckpt: checkpoint at %llu ps, server pid %d, %s\n",
                static_cast<unsigned long long>(ctx->time()), pid, fifo.c_str());
        std::ofstream(std::string(cwd) + "/ckpt.info") << "time_ps " << ctx->time() << "\npid " << pid << "\n";
        if (*ctx->commandArgsPlusMatch("CKPT_STOP")) {
            fflush(nullptr);
            _exit(0);
        }
        return;
    }
    // the server
    setsid();
    reopen_files(false);
    redirect(0, "/dev/null", O_RDONLY);
    redirect(1, "/dev/null", O_WRONLY);
    redirect(2, "/dev/null", O_WRONLY);
    close(ready[0]);
    (void)!write(ready[1], "r", 1);
    close(ready[1]);
    signal(SIGCHLD, SIG_IGN);
    for (;;) {
        FILE* f = fopen(fifo.c_str(), "r");
        if (!f) _exit(1);
        char line[PATH_MAX];
        while (fgets(line, sizeof line, f)) {
            std::string dir{line};
            while (!dir.empty() && (dir.back() == '\n' || dir.back() == '\r')) dir.pop_back();
            if (dir == "quit") { unlink(fifo.c_str()); _exit(0); }
            if (dir.empty() || dir[0] != '/') continue;
            const pid_t r = fork();
            if (r == 0) {
                fclose(f);
                start_replay(ctx, dir);
                top->atClone();
                return;
            }
        }
        fclose(f);
    }
}

int main(int argc, char** argv, char**) {
    for (int i = 0; i < argc; i++) g_args.emplace_back(argv[i]);
    Verilated::debug(0);
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->threads(SIM_THREADS);
    contextp->commandArgs(argc, argv);
    const std::unique_ptr<Vtb_sys> topp{new Vtb_sys{contextp.get(), ""}};

    while (VL_LIKELY(!contextp->gotFinish())) {
        topp->eval();
        if (VL_UNLIKELY(g_mark)) {
            g_mark = false;
            checkpoint(contextp.get(), topp.get());
        }
        if (!topp->eventsPending()) break;
        contextp->time(topp->nextTimeSlot());
    }
    if (VL_LIKELY(!contextp->gotFinish())) {
        VL_DEBUG_IF(VL_PRINTF("+ Exiting without $finish; no events left\n"););
    }
    topp->final();
    contextp->statsPrintSummary();
    return 0;
}
