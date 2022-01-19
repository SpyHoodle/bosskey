![Bosskey Logo](https://file.coffee/u/UYKRR1qjktBdPA.png)
# About
A super simple shell script for Linux it pause playing media, mute the volume, hide windows and then lock the computer.<br>
Windows support will be coming soon, in the form of an [AutoHotkey](https://www.autohotkey.com/) script.
## Why?
I often find myself pausing whatever is playing, muting my computer and then locking it. 
So I created this script, to do it all at once, so my computer is in the perfect state when I leave it.
It makes it a lot easier to know no-one is going to mess around with my computer.
I also wanted it to hide my windows before locking so when I unlock I don't see them (just in case 😉.)

## Options
`bosskey` (no arguments) to hide windows<br>
`bosskey lock` hides windows and locks<br>
`bosskey undo` unmute, and unhides everything<br>

# Installation (Linux)
Install by downloading the script, and binding it to a hotkey/key.<br>
You can use a simple program which binds keys like `sxhkd`.
## Dependencies:
- `slock` - for locking the computer
- `pamixer` - for muting and unmuting
- `playerctl` - for pausing any media
- A way to ask your window manager to go to the desktop or hide all windows. 
  - On dwm, you can use the `dwmc` patch to go to tag 9, with no windows on.
