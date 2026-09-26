# Lunix, an unix-like kernel compatible with linux

## Usage

To compile the kernel, run:
```bash
make
```

This will compile kernel for you.
To configure modules, you can change DRIVERS variable in Makefile

### To compile multi-thread, run
```bash
make -j$(nproc)
```

## License
This project is licensed under GPL-2.0-or-later.
For commercial licensing or inquiries, feel free to contact me via email: palaomer100@gmail.com

## Credits

This project incorporates components from the following open-source projects:

- **POSIX-UEFI**: Header files and UEFI boot infrastructure wrappers.
  - **Author**: bzt
  - **License**: MIT License
  - **Source**: https://gitlab.com/bztsrc/posix-uefi
