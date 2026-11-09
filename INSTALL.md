# Installing the Sega Saturn core on the Analogue Pocket

> Work in progress: this build does not run Saturn software yet.

## 1. Copy the core to the microSD card

**The easy way:** put the microSD card in your computer and run the installer, from a clone of the repo
or on its own after downloading it from the release page:

| System        | Run                                                                 |
|---------------|---------------------------------------------------------------------|
| Windows       | double-click **`install.bat`** (or `.\install.ps1` in PowerShell)  |
| macOS / Linux | `./install.sh`                                                      |

It finds the Pocket SD card, asks you to confirm, copies the core and this guide, prepares the discs
already on the card (section 3), and offers to eject the card. Options: `--dry-run` / `-DryRun` shows
what would be copied and changes nothing; `--sd /Volumes/POCKET` / `-SD E:\` names the card yourself.

**It never replaces a file without asking.** Files already on the card that are identical are skipped.
For each one that differs it asks `Replace it? [y]es / [N]o / [a]ll / [s]kip all`; pressing Enter keeps
the card's file. Run without a console (or with the dry-run option), it never replaces anything and lists
what differs. The exception is the disc files it generates (section 3), which it rewrites when they
change. Without a built core next to it, the installer downloads the newest release from GitHub.

**By hand:** copy the contents of `defgenx.Saturn.zip` (or the `release/` folder made by `./build.sh`) to
the **root** of the card, merging with the folders already there. The disc tool is a separate download of the
same release (section 3); put it at the root of the card too:

```
SD card root
├── Assets/
│   └── saturn/
│       ├── common/              <- discs: merged .img and .toc (from the .cue and .bin tracks)
│       └── defgenx.Saturn/      <- the BIOS image(s), any name, and each game's .json
├── Saturn-prepare-card          <- prepares the discs (separate download): macOS, or the .exe on Windows
├── Cores/
│   └── defgenx.Saturn/
│       ├── saturn.rbf_r         <- the core bitstream
│       ├── core.json  data.json  input.json  interact.json  video.json ...
└── Platforms/
    ├── saturn.json
    └── _images/saturn.bin       <- the platform picture (by dyreschlock)
```

Don't replace the existing `Assets`, `Cores` or `Platforms` folders; merge into them. Eject the card
cleanly afterwards.

## 2. BIOS

The Saturn BIOS is not included. Put one or more 512 KB BIOS images (`.bin` or `.rom`, any name, e.g.
`sega_101.bin` or `mpr-17933.bin`) in `Assets/saturn/defgenx.Saturn/`. Each time the core starts, the Pocket
asks which one to use; the choice is not saved. To switch BIOS while the core runs, use the core's menu (**Core
Settings** / **BIOS**): the core restarts with the new one.

## 3. Add discs

Copy each game's `.cue` and `.bin` files into `Assets/saturn/common/<game>/` (or at the root of the card: they
are moved there), then double-click **`Saturn-prepare-card`** (macOS) or **`Saturn-prepare-card.exe`**
(Windows x64) at the root of the card, or run the installer again, which downloads it and runs it too. No Python
is needed. The tool is not in the core zip: each build is a separate asset of the release,
`Saturn-prepare-card-macos.zip` (unzip it; the zip keeps it executable) and `Saturn-prepare-card.exe` for the
usual systems, and `Saturn-prepare-card-arm64.exe` and `Saturn-prepare-card-x86.exe` for Windows on ARM and 32-bit Windows, `Saturn-prepare-card-linux-x64.zip`, `-linux-arm64.zip`, `-linux-armv7.zip`, `-linux-x86.zip` for Linux (unzip, put the program at the card root and run it from a terminal).

- macOS, first run: the tool is not notarized; right-click it, choose **Open**, then **Open** again.
- Windows: if SmartScreen says "Windows protected your PC", click **More info**, then **Run anyway**.

It first checks the card: the BIOS (`[!!] NO BIOS` when `Assets/saturn/defgenx.Saturn/` has no 512 KB image, a
file there of the wrong size, a BIOS left in another folder), each game's folders, a `.cue` whose tracks are
missing or named differently, `.bin`/`.img` files no `.cue` lists, and whether it sits at the root of a Pocket
card; it ends with "Card ready" or the list of problems and how to fix each. Then it lists the games and asks
which to prepare (Enter: the new and out-of-date ones; `a`: all; numbers: those; `q`: quit). The core does not
read `.cue` sheets itself; for every game prepared the tool writes

- `Game (USA).img` (the disc's TOC in a first sector, then all the tracks, in one file) and `Game (USA).toc` next
  to the tracks;
- `Game (USA).json` in `Assets/saturn/defgenx.Saturn/`, where the core lists the games: on the Pocket, pick it as
  the game. Its `data_path` names the game's folder under `common/`.

It waits for Enter before closing. The `.json` binds the `.toc` and the track files, separate tracks included. A
disc can also be loaded as the `.img` alone: pick `Game (USA).img` in the **Disc (.img)** slot (core menu); the
core reads the TOC from the image's first sector. An `.img` written by an older tool has no TOC sector: run the
tool again (it asks before rewriting the `.img`; a kept old `.img` still loads from its `.json`). `--merge never`
makes the `.json` list the track files instead (no `.img`). A run asks before it overwrites a game's `.img`,
`.toc` or `.json` that would change (`--yes` overwrites all; from a script without a terminal they are kept). A
WWF / Road Rash flag or RAM cart recorded in an existing `.toc` is kept. The v0.2.19 tool wrote the `.json` next
to the tracks, where the core does not look, and renamed the ones in `Assets/saturn/defgenx.Saturn/` to
`.json.old`. The tool writes every `.json` there again; the `.json.old` files, and the `.json` files left next to
the tracks, can be deleted.

From a terminal: `./Saturn-prepare-card --card /Volumes/POCKET` prepares every disc without asking which
(`--dry-run` only shows what it would change, `--check` only checks the card), or for one disc
`./Saturn-prepare-card "Game (USA).cue" -o "Game (USA)/"` with `-o` the folder of the `.cue` and its tracks, so the
`.toc` and `.json` land next to them (then move the `.json` into `Assets/saturn/defgenx.Saturn/` and set its
`data_path` to the game's folder under `common/`, ending in `/`). In this repository the tool is
`tools/prepare-card/` (Go; `go run . --help` there). CHD is not supported.

## Saves

The Saturn's internal backup RAM is saved when the core is closed, the Pocket sleeps or is turned off, in
`Saves/saturn/defgenx.Saturn/`. A game started from its `.json` gets its own file, named after the `.json`
(`Game (USA).sav`). For a disc picked directly as the disc image the Pocket has no `.json` to name the file after;
it should then use `saturn_bram.sav`, shared by those games (the BIOS keeps each game's saves apart inside it, as on
a real Saturn). This is not yet checked on a Pocket. A new file starts formatted and empty. The file is
MiSTer's 64 KB layout, so a MiSTer `.sav` (of a game run without a backup cartridge) can be copied over it. With
Cartridge set to Backup, the cartridge is saved next to it as a 1 MB `.cart` file.

## 4. Start it

On the Pocket: *openFPGA -> Sega Saturn*.

| Setting  | What it does                                           |
|----------|--------------------------------------------------------|
| Region   | Auto (from the disc), Japan, USA or Europe             |
| CD Speed | 1x or 2x                                               |
| Reset    | Restarts the Saturn                                    |

## Controls

| Pocket          | Saturn           |
|-----------------|------------------|
| D-pad           | D-pad            |
| B / A           | A / B            |
| R1              | C                |
| Y / X           | X / Y            |
| L1              | Z                |
| Select + L1/R1  | L / R            |
| Dock L2 / R2    | L / R            |
| Start           | Start            |

Players 1 and 2 are Pocket / Dock controllers 1 and 2.
