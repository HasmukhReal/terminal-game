# Compiling the Games

This repository contains games written in C. To play them, you need to compile the source code into an executable.

## Prerequisites

You will need a C compiler installed on your system. Common options include:

- **Windows**: [MinGW-w64](https://www.mingw-w64.org/), [MSYS2](https://www.msys2.org/), or the Build Tools for Visual Studio.
- **Linux**: GCC (usually installed via `sudo apt install build-essential` or similar).
- **macOS**: Xcode Command Line Tools (`xcode-select --install`).

## Compilation Instructions

### Using GCC (Recommended)

1. Open your terminal/command prompt.
2. Navigate to the `games/` directory:
   ```bash
   cd games
   ```
3. Run the following command:
   ```bash
   gcc guess_the_number.c -o guess_the_number
   ```

### Using a Makefile (Optional)

If you have `make` installed, you can compile all games at once from the root directory (feature coming soon).

## Running the Games

Once compiled, you can run the executable directly from your terminal.

- **Windows**:
  ```powershell
  .\guess_the_number.exe
  ```
- **Linux/macOS**:
  ```bash
  ./guess_the_number
  ```

## Troubleshooting

- **'gcc' is not recognized**: Ensure your compiler's `bin` folder is added to your system's PATH.
- **Permission denied**: On Linux/macOS, you may need to give the file execution permissions: `chmod +x guess_the_number`.
