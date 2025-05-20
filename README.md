# dmenu - customized fork

This repository is a customized fork of the [suckless project's dmenu](https://tools.suckless.org/dmenu/) — a dynamic menu for X, typically used with [dwm](https://dwm.suckless.org/).

## About

This version includes a personal set of patches and configuration changes intended to improve the visual appearance and layout of dmenu. The goal is to enhance usability while maintaining the minimalist philosophy of suckless software.

## Changes and Customizations

### Applied Patches

The following patches were applied and are included in the `patches/` directory:

- [`dmenu-alpha`](https://tools.suckless.org/dmenu/patches/alpha/) – adds alpha (transparency) support.
- [`dmenu-center`](https://tools.suckless.org/dmenu/patches/center/) – allows dmenu to be centered on the screen.
- [`dmenu-grid`](https://tools.suckless.org/dmenu/patches/grid/) – adds grid layout support for items.

### Configuration Changes

The configuration has been customized in `config.h`. Below is a summary of the main modifications:

| Setting               | Original Value                       | Customized Value                               |
|-----------------------|---------------------------------------|------------------------------------------------|
| `fonts[]`             | `"monospace:size=10"`                | `"JetBrainsMono Nerd Font:size=11"`            |
| `topbar`              | `1`                                  | `1` (unchanged)                                |
| `centered`            | _Not present_                        | `0` (added: enable screen centering)           |
| `min_width`           | _Not present_                        | `500` (minimum width when centered)            |
| `menu_height_ratio`   | _Not present_                        | `4.0f` (controls vertical sizing)              |
| `alpha`               | _Not present_                        | `0xff` (controls opacity)                      |
| `alphas[Scheme*]`     | _Not present_                        | Added transparency for schemes                 |
| `colors[Scheme*]`     | Default light-on-dark                | Slightly modified background colors            |
| `lines` and `columns` | `lines = 0`                          | `lines = 0`, `columns = 0` (grid support added)|

Both the original and customized versions of `config.h` are included for reference.

## Build Instructions

To build this version of dmenu:

```sh
git clone https://github.com/wellingtonctm/dmenu.git
cd dmenu
sudo make install
```

Ensure you have the required development libraries installed:

- `libx11`
- `libxft`
- `fontconfig`
- A Nerd Font (e.g., [JetBrainsMono Nerd Font](https://www.nerdfonts.com/font-downloads))

## License

This project is licensed under the MIT/X Consortium license, the same as the original [suckless dmenu](https://tools.suckless.org/dmenu/). See the `LICENSE` file for details.

## Credits

- [suckless.org](https://suckless.org) for the original `dmenu`
- Patch authors credited in each respective `.diff` file under `patches/`