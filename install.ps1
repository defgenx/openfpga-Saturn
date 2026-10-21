<#
.SYNOPSIS
  Install the Sega Saturn core onto an Analogue Pocket microSD card (Windows).

.DESCRIPTION
  Finds the Pocket SD card, then copies the core and the install guide.
  Files already on the card are never replaced silently: identical ones are skipped,
  and for each one that differs you are asked (default: keep the card's file).
  Without an interactive console (or with -DryRun) nothing on the card is ever replaced.
  Without a built core next to the script, the newest release is downloaded from GitHub.

  Easiest: double-click install.bat. Or in PowerShell:
    .\install.ps1
    .\install.ps1 -SD E:\
    .\install.ps1 -DryRun
    .\install.ps1 -ResetSettings   # also erase the core's saved settings (asks first)
#>
[CmdletBinding()]
param(
    [string]$SD = "",
    [switch]$DryRun,
    [switch]$ResetSettings
)

$ErrorActionPreference = "Stop"
$Repo = "defgenx/openfpga-Saturn"
$Core = "defgenx.Saturn"
$Here = Split-Path -Parent $MyInvocation.MyCommand.Path

function Fail([string]$msg) { Write-Host "error: $msg" -ForegroundColor Red; exit 1 }

# Ask PROMPT DEFAULT: without an interactive console the default is used
$Interactive = [Environment]::UserInteractive -and -not [Console]::IsInputRedirected
function Ask([string]$prompt, [string]$default) {
    if (-not $Interactive) { return $default }
    $a = Read-Host $prompt
    if ([string]::IsNullOrWhiteSpace($a)) { return $default }
    return $a
}

# ---------------------------------------------------------------------------
# 1. Files to install: local dist\ when it holds a built core, else the release
# ---------------------------------------------------------------------------

$Tmp = $null
try {
    $localCore = Join-Path $Here "dist/Cores/$Core/saturn.rbf_r"
    if (Test-Path -LiteralPath $localCore) {
        $Src = Join-Path $Here "dist"
        Write-Host "Using the core from $Src"
    } else {
        [Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12
        $Tmp = Join-Path ([IO.Path]::GetTempPath()) ("saturn-" + [Guid]::NewGuid())
        New-Item -ItemType Directory -Path $Tmp | Out-Null
        # highest version among all releases, pre-releases included
        $releases = Invoke-RestMethod -Uri "https://api.github.com/repos/$Repo/releases?per_page=100" -Headers @{ "User-Agent" = "saturn-installer" }
        $best = $null
        foreach ($r in $releases) {
            $asset = $r.assets | Where-Object { $_.name -eq "$Core.zip" } | Select-Object -First 1
            if (-not $asset) { continue }
            try { $v = [Version]($r.tag_name.TrimStart("v") -replace "[^0-9.].*$", "") } catch { continue }
            if (-not $best -or $v -gt $best.Version) { $best = @{ Version = $v; Url = $asset.browser_download_url } }
        }
        if (-not $best) { Fail "could not find a release of $Repo" }
        Write-Host "Downloading $($best.Url)"
        $zip = Join-Path $Tmp "core.zip"
        Invoke-WebRequest -Uri $best.Url -OutFile $zip -UseBasicParsing
        Expand-Archive -LiteralPath $zip -DestinationPath (Join-Path $Tmp "core")
        $Src = Join-Path $Tmp "core"
    }
    if (-not (Test-Path -LiteralPath (Join-Path $Src "Cores/$Core/saturn.rbf_r"))) { Fail "no core bitstream found in $Src" }

    # -----------------------------------------------------------------------
    # 2. Find the SD card
    # -----------------------------------------------------------------------

    function Test-PocketCard([string]$root) {
        foreach ($d in "Cores", "Platforms", "Assets", "System") {
            if (Test-Path -LiteralPath (Join-Path $root $d) -PathType Container) { return $true }
        }
        return $false
    }

    if (-not $SD) {
        $candidates = @()
        if ($IsLinux -or $IsMacOS) {
            # PowerShell 7 outside Windows: same places as install.sh
            foreach ($base in "/Volumes", "/media/$env:USER", "/run/media/$env:USER", "/media", "/mnt") {
                if (Test-Path $base) { $candidates += Get-ChildItem -LiteralPath $base -Directory | ForEach-Object FullName }
            }
        } else {
            # removable drives first, then any other drive that already looks like a Pocket card
            $drives = Get-CimInstance Win32_LogicalDisk | Where-Object { $_.DriveType -in 2, 3 } |
                Sort-Object @{ Expression = { $_.DriveType -ne 2 } }, DeviceID
            foreach ($d in $drives) {
                $root = "$($d.DeviceID)\"
                if ($d.DeviceID -eq $env:SystemDrive) { continue }
                if ($d.DriveType -eq 2 -or (Test-PocketCard $root)) { $candidates += $root }
            }
        }
        $pocket = @($candidates | Where-Object { Test-PocketCard $_ })

        if ($pocket.Count -eq 1) {
            $SD = $pocket[0]
            Write-Host "Found Pocket SD card: $SD"
            if ((Ask "Install there? [Y/n]" "y") -match "^[nN]") { Fail "aborted" }
        } else {
            $list = if ($pocket.Count -gt 0) { $pocket } else { @($candidates) }
            if ($list.Count -eq 0) { Fail "no SD card found - insert it, or run with -SD E:\" }
            if ($pocket.Count -eq 0) { Write-Host "No card with Pocket folders found; drives:" }
            else { Write-Host "Several Pocket cards found:" }
            for ($i = 0; $i -lt $list.Count; $i++) { Write-Host ("  {0}) {1}" -f ($i + 1), $list[$i]) }
            if (-not $Interactive) { Fail "several drives found - run with -SD E:\" }
            $n = Ask "Number of the SD card to install to" ""
            if (-not ($n -match "^\d+$") -or [int]$n -lt 1 -or [int]$n -gt $list.Count) { Fail "invalid choice" }
            $SD = $list[[int]$n - 1]
        }
    }

    if (-not (Test-Path -LiteralPath $SD -PathType Container)) { Fail "$SD is not a drive or folder" }
    if (-not (Test-PocketCard $SD)) { Write-Host "Note: $SD has no Cores/Platforms/Assets folders yet; they will be created." }

    # -----------------------------------------------------------------------
    # 2b. Optionally erase the settings the Pocket saved for this core
    # -----------------------------------------------------------------------

    if ($ResetSettings) {
        $settings = Join-Path $SD "Settings/$Core"
        if (-not (Test-Path -LiteralPath $settings)) {
            Write-Host "No saved settings for $Core on the card (nothing to reset)."
        } elseif ($DryRun) {
            Write-Host "would erase $settings"
        } elseif (-not $Interactive) {
            Write-Host "Not erasing $settings without a console to confirm."
        } elseif ((Ask "Erase the saved settings in $settings? The core starts with defaults. [y/N]" "n") -match "^[yY]") {
            Remove-Item -LiteralPath $settings -Recurse -Force
            Write-Host "Erased saved settings: the core will start with its defaults."
        } else {
            Write-Host "Saved settings kept."
        }
    }

    # -----------------------------------------------------------------------
    # 3. Copy, never replacing anything
    # -----------------------------------------------------------------------

    $copied = 0; $replaced = 0; $same = 0
    $kept = New-Object System.Collections.Generic.List[string]
    $policy = ""   # "all" = replace every differing file, "none" = keep every one
    $srcFull = (Resolve-Path -LiteralPath $Src).Path.TrimEnd('\', '/')
    $files = @(Get-ChildItem -LiteralPath $srcFull -Recurse -File -Force |
        Where-Object { $_.Name -notin ".DS_Store", ".keep" -and -not $_.Name.StartsWith("._") } |
        Sort-Object FullName)

    $items = @($files | ForEach-Object { @{ From = $_.FullName; Rel = $_.FullName.Substring($srcFull.Length + 1) } })
    # the install guide goes along (the release zip already carries it as Saturn-INSTALL.md)
    $guide = Join-Path $Here "INSTALL.md"
    if (-not ($items | Where-Object { $_.Rel -eq "Saturn-INSTALL.md" }) -and (Test-Path -LiteralPath $guide)) {
        $items += @{ From = $guide; Rel = "Saturn-INSTALL.md" }
    }

    foreach ($it in $items) {
        $rel = $it.Rel -replace '\\', '/'
        $dst = Join-Path $SD $rel
        $verb = "copied  "
        if (Test-Path -LiteralPath $dst) {
            if ((Get-FileHash -LiteralPath $it.From).Hash -eq (Get-FileHash -LiteralPath $dst).Hash) { $same++; continue }
            if ($DryRun -or -not $Interactive -or $policy -eq "none") { $kept.Add($rel); continue }
            if ($policy -ne "all") {
                $a = Ask "$rel already exists and differs. Replace it? [y]es/[N]o/[a]ll/[s]kip all" "n"
                if ($a -match "^[aA]") { $policy = "all" }
                elseif ($a -match "^[sS]") { $policy = "none"; $kept.Add($rel); continue }
                elseif ($a -notmatch "^[yY]") { $kept.Add($rel); continue }
            }
            $verb = "replaced"
        }
        if ($DryRun) {
            Write-Host "would copy  $rel"
        } else {
            $dir = Split-Path -Parent $dst
            if (-not (Test-Path -LiteralPath $dir)) { New-Item -ItemType Directory -Path $dir -Force | Out-Null }
            Copy-Item -LiteralPath $it.From -Destination $dst -Force
            Write-Host "$verb    $rel"
        }
        if ($verb -eq "replaced") { $replaced++ } else { $copied++ }
    }

    # the folders for the BIOS and for disc images
    if (-not $DryRun) { New-Item -ItemType Directory -Path (Join-Path $SD "Assets/saturn/common") -Force | Out-Null; New-Item -ItemType Directory -Path (Join-Path $SD "Assets/saturn/defgenx.Saturn") -Force | Out-Null }

    Write-Host ""
    if ($DryRun) { Write-Host "Dry run: $copied file(s) would be copied to $SD" }
    else { Write-Host "Copied $copied new file(s), replaced $replaced, $same already up to date on $SD" }
    if ($kept.Count -gt 0) {
        Write-Host "Kept the card's version (differs from this release): $($kept.Count)"
        foreach ($s in $kept) { Write-Host "  - $s" }
        if (-not $Interactive -and -not $DryRun) { Write-Host "Run the script in a console to be asked about replacing them." }
    }
    if ($DryRun) { exit 0 }

    # -----------------------------------------------------------------------
    # 4. Eject
    # -----------------------------------------------------------------------

    $ej = Ask "Eject the SD card now? [Y/n]" $(if ($Interactive) { "y" } else { "n" })
    if ($ej -match "^[nN]") {
        Write-Host "Remember to eject the card before removing it."
    } elseif ($IsLinux -or $IsMacOS) {
        Write-Host "Eject the card from your system before removing it."
    } else {
        $letter = (Split-Path -Qualifier $SD)
        try {
            (New-Object -ComObject Shell.Application).Namespace(17).ParseName("$letter\").InvokeVerb("Eject")
            Write-Host "Ejected. Put the card in the Pocket and start openFPGA -> Sega Saturn."
        } catch {
            Write-Host "Could not eject automatically; use 'Safely Remove Hardware' before removing the card."
        }
    }
} finally {
    if ($Tmp -and (Test-Path -LiteralPath $Tmp)) { Remove-Item -LiteralPath $Tmp -Recurse -Force }
}
