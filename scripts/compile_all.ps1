param(
    [string]$Compiler = "gcc"
)

$ErrorActionPreference = "Stop"
$repoRoot = Split-Path -Parent $PSScriptRoot
$buildRoot = Join-Path $repoRoot "build"
New-Item -ItemType Directory -Force -Path $buildRoot | Out-Null

$sources = Get-ChildItem -Path $repoRoot -Recurse -Filter *.c |
    Where-Object { $_.FullName -notlike "*\build\*" }

foreach ($source in $sources) {
    $relative = $source.FullName.Substring($repoRoot.Length + 1)
    $relativeDirectory = Split-Path -Parent $relative
    $relativeWithoutExtension = [IO.Path]::GetFileNameWithoutExtension($relative)
    $outputDirectory = Join-Path $buildRoot $relativeDirectory
    $output = Join-Path $outputDirectory ($relativeWithoutExtension + ".exe")
    New-Item -ItemType Directory -Force -Path (Split-Path -Parent $output) | Out-Null
    & $Compiler -std=c11 -Wall -Wextra -pedantic $source.FullName -o $output
    if ($LASTEXITCODE -ne 0) {
        throw "Compilation failed: $relative"
    }
    Write-Host "OK $relative"
}

Write-Host "Compiled $($sources.Count) C programs into $buildRoot"
