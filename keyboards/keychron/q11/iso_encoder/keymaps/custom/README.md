# HOW-TO

# Download qmk tool
https://docs.qmk.fm/newbs_getting_started

# Start QMK MSYS
Start the QMK MSYS software to get access to the CLI

# Convert via to qmk
```sh
qmk via2json -kb keychron/q11/iso_encoder -l LAYOUT_92_iso -o outfile.json backup.json
```

# Create new keymap
```sh
qmk new-keymap -kb keychron/q11/iso_encoder
```

# How to build
```sh
qmk compile -kb keychron/q11/iso_encoder -km custom
```

# Flash keyboard
Unplug the power cable from the keyboard.
Remove the space bar keycap to find the reset button on the left side of the space bar switch on the PCB.
Insert a pin in the whole which does not have a LED light (bottom hole) and insert the power cable.

INFO: Use the QMK Toolbox as it is more reliable
```sh
qmk flash -kb keychron/q11/iso_encoder -km custom
```

If you are using the QMK Toolbox, select the `.bin` file and flash the keyboard, both sides will be flashed.
