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
the **root** of the card, merging with the folders already there:

```
SD card root
├── Assets/
│   └── saturn/
│       ├── common/              <- disc files: .bin tracks plus the .toc from mktoc.py
│       └── defgenx.Saturn/      <- the BIOS and the .json from mktoc.py
├── Cores/
│   └── defgenx.Saturn/
│       ├── saturn.rbf_r         <- the core bitstream
│       ├── core.json  data.json  input.json  interact.json  video.json ...
└── Platforms/
    └── saturn.json
```

Don't replace the existing `Assets`, `Cores` or `Platforms` folders; merge into them. Eject the card
cleanly afterwards.

## 2. BIOS

The Saturn BIOS is not included. Put a 512 KB BIOS image named `sega_101.bin` (or `mpr-17933.bin`
renamed to it) in `Assets/saturn/defgenx.Saturn/`. The core does not start without it.

## 3. Add discs

Copy each game's `.cue` and `.bin` files into `Assets/saturn/common/`, directly or in a subfolder per game,
then run the installer again. The core does not read `.cue` sheets itself: for every `.cue` the installer runs
`Saturn-mktoc.py` (it needs [Python 3](https://www.python.org/downloads/)), which writes

- `Game (USA).toc` (and a merged `Game (USA).img` when the disc has more than 24 track files) next to the tracks;
- `Game (USA).json` into `Assets/saturn/defgenx.Saturn/`: on the Pocket, pick it as the disc.

It does this on every run, so the files always match the core. When two discs in different subfolders have
the same name, their `.json` names start with the subfolder (`USA - Game.json`). A `.json` left in `common/` by
v0.2.4 is moved to `defgenx.Saturn/` and the old copy is renamed `.json.old`. A WWF / Road Rash flag or RAM cart
recorded in an existing `.toc` is kept. Without Python the installer says how to install it and carries on.

To do the same by hand: `python3 Saturn-mktoc.py --card /Volumes/POCKET` (add `--dry-run` to only see what it
would change), or for one disc `python3 Saturn-mktoc.py "Game (USA).cue" -o out/ --data-path "Game (USA)/"`,
where `--data-path` is the tracks' folder relative to `Assets/saturn/common/` (leave it out for `common/`
itself). `Saturn-mktoc.py` is at the root of the card; in this repository it is `tools/mktoc.py`. CHD is not
supported.

Backup RAM is not saved to the card yet: saves last until the core is closed.

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
