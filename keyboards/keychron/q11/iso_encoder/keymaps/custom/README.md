# HOW-TO

# Download qmk tool
https://docs.qmk.fm/newbs_getting_started

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
INFO: Use the QMK Toolbox as it is more reliable
```sh
qmk flash -kb keychron/q11/iso_encoder -km custom
```
