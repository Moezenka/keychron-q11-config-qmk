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

# Sync fork with upstream
```sh
$ git fetch upstream
$ git rebase upstream/main
```

If you have submodules that are modified:
```sh
$ git status
On branch master
Your branch and 'origin/master' have diverged,
and have 670 and 16 different commits each, respectively.
  (use "git pull" if you want to integrate the remote branch with yours)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   lib/chibios (new commits)
        modified:   lib/chibios-contrib (new commits)
        modified:   lib/pico-sdk (new commits)

no changes added to commit (use "git add" and/or "git commit -a")

$ git restore lib/chibios lib/chibios-contrib lib/pico-sdk
$ git submodule update --init --recursive

# Verify
$ git status
On branch master
Your branch and 'origin/master' have diverged,
and have 670 and 16 different commits each, respectively.
  (use "git pull" if you want to integrate the remote branch with yours)

nothing to commit, working tree clean

$ git log --oneline --decorate --graph --max-count=20
* b871740671 (HEAD -> master) fix: JUMP_L & JUMP_R
...

$ git push --force-with-lease
```
