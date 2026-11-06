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
│       ├── common/              <- discs: merged .img and .toc (from the .cue and .bin tracks)
│       └── defgenx.Saturn/      <- the BIOS image(s), any name
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

The Saturn BIOS is not included. Put one or more 512 KB BIOS images (`.bin` or `.rom`, any name, e.g.
`sega_101.bin` or `mpr-17933.bin`) in `Assets/saturn/defgenx.Saturn/`. The first time the core starts, the Pocket
asks which one to use and remembers it; it can be changed from the core's menu.

## 3. Add discs

Copy each game's `.cue` and `.bin` files into `Assets/saturn/common/`, directly or in a subfolder per game,
then run the installer again. The core does not read `.cue` sheets itself: for every `.cue` the installer runs
`Saturn-mktoc.py` (it needs [Python 3](https://www.python.org/downloads/)), which writes

- `Game (USA).toc` next to the tracks (and a merged `Game (USA).img` when the disc has more than 24 track files);
- `Game (USA).json` in the same folder: on the Pocket, pick it as the game.

The `.json` binds the `.toc` and the track files, separate tracks included. A disc can also be loaded as one merged
image: `--merge always` writes `Game (USA).img`, which goes in the **Disc image** slot with the `.toc` in the
**Disc TOC** slot (core menu). It does this on every run, so the files always
match the core; a `.json` already next to the tracks is rewritten in place. The `.json` files v0.2.5 and v0.2.6
put in `Assets/saturn/defgenx.Saturn/` do not start a disc: each is renamed `.json.old` once its disc has its
`.json` next to the tracks. A WWF / Road Rash flag or RAM cart recorded in an existing `.toc` is kept. Without
Python the installer says how to install it and carries on.

To do the same by hand: `python3 Saturn-mktoc.py --card /Volumes/POCKET` (add `--dry-run` to only see what it
would change), or for one disc `python3 Saturn-mktoc.py "Game (USA).cue" -o "Game (USA)/"` with `-o` the
folder of the `.cue` and its tracks, so the `.toc` and `.json` land next to them. `Saturn-mktoc.py` is at the
root of the card; in this repository it is `tools/mktoc.py`. CHD is not supported.

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
