![Bosskey Logo](https://file.coffee/u/UYKRR1qjktBdPA.png)
Bosskey is an ultimate computer locker program for **Linux & X11**. Mute, pause, hide and lock at just a key press. 
It uses a modified version of suckless's slock to lock your computer; just type your password correctly and press enter.
## Why?
I often find myself pausing whatever is playing, muting my computer and then locking it. 
So I created this script, to do it all at once, so my computer is in the perfect state when I leave it.
It makes it a lot easier to know no-one is going to mess around with my computer.
I also wanted it to hide my windows before locking so I don't see them when I unlock (just in case 😉.)

## Options
`bosskey` `[hard|soft|undo]` `{window-manager}` `{status-bar}`<br>
All options mute and pause:
- `soft` - Hides windows (looks less suspicious)
- `lock` - Don't hide windows, but lock the computer
- `hard` - Lock computer, as well as hiding windows
- `undo` - Unmute and go back to original windows

Support for more window managers is coming soon. Only `dwm` and `dwmblocks` are supported currently.
# Installation
Install the dependencies on your system
- `pamixer` - for muting and unmuting
- `playerctl` - for pausing any media

Start by cloning the git repository
```sh 
git clone https://github.com/SpyHoodle/bosskey/
```

Move the locked.xpm image, for example `.local/share/slock`
```sh
cd bosskey/slock
mkdir ~/.local/share/slock
mv locked.xpm ~/.local/share/slock/locked.xpm
```

Edit `config.h`
- Change `user` and `group` variables to what matches your system
- Change `imgpath` of `locked.xpm` to where you placed the file
- Change `monheight` and `monwidth` to match your monitor width and height

Make and install the patched slock (for locking the computer)
```sh
make install
```

If you'd like, you can move the `bosskey` script to a $PATH folder, such as /usr/bin so that it can be run anywhere
```sh
cd ..
mv bosskey /usr/bin/bosskey
```
# Finally...
- You can now bind the `bosskey` script to a keybind using an external program such as `sxhkd`
- To change the image, simply:
  - Update the `imgpath` variable with the new name/location
  - Update the `imgwidth` and `imgheight` to match the new image
