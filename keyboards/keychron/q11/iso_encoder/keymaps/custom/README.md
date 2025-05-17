# HOW-TO

# Convert via to qmk
qmk via2json -kb keychron/q11/iso_encoder -l LAYOUT_92_iso -o outfile.json backup.json

# Create new keymap
qmk new-keymap -kb keychron/q11/iso_encoder

# How to build
qmk compile -kb keychron/q11/iso_encoder -km custom
