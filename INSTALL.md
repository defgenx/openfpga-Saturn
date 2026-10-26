# Installing the Sega Saturn core on the Analogue Pocket

> Work in progress: this build does not run Saturn software yet.

## 1. Copy the core to the microSD card

**The easy way:** put the microSD card in your computer and run the installer, from a clone of the repo
or on its own after downloading it from the release page:

| System        | Run                                                                 |
|---------------|---------------------------------------------------------------------|
| Windows       | double-click **`install.bat`** (or `.\install.ps1` in PowerShell)  |
| macOS / Linux | `./install.sh`                                                      |

It finds the Pocket SD card, asks you to confirm, copies the core and this guide, and offers to eject the
card. Options: `--dry-run` / `-DryRun` shows what would be copied and changes nothing;
`--sd /Volumes/POCKET` / `-SD E:\` names the card yourself.

**It never replaces a file without asking.** Files already on the card that are identical are skipped.
For each one that differs it asks `Replace it? [y]es / [N]o / [a]ll / [s]kip all`; pressing Enter keeps
the card's file. Run without a console (or with the dry-run option), it never replaces anything and lists
what differs. Without a built core next to it, the installer downloads the newest release from GitHub.

**By hand:** copy the contents of `defgenx.Saturn.zip` (or the `release/` folder made by `./build.sh`) to
the **root** of the card, merging with the folders already there:

```
SD card root
├── Assets/
│   └── saturn/
│       ├── common/              <- disc files: .bin tracks plus the .json and .toc from mktoc.py
│       └── defgenx.Saturn/      <- the BIOS goes here
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

The core does not read `.cue` sheets itself. For each game, run `tools/mktoc.py` from this repository
(Python 3) on the `.cue`:

```
python3 tools/mktoc.py "Game (USA).cue" -o out/
```

It writes `Game (USA).toc` and `Game (USA).json`, and a merged `.img` if the tracks need merging. Copy
these files, together with the game's `.bin` track files, into `Assets/saturn/common/`. On the Pocket, pick
`Game (USA).json` as the disc. If the tracks sit in a subfolder of `Assets/saturn/`, pass
`--data-path <subfolder>`. CHD is not supported.

Backup RAM is saved to the card (`saturn_bram.sav`, 32 KB; `saturn_cart.sav`, 512 KB for the backup
cartridge).

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
