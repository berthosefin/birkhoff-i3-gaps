## Preview
![alt text](https://raw.githubusercontent.com/berthosefin/birkhoff-i3-gaps/master/scrot.png)

## Details
- **Display Server** X11
- **Display Manager** LightDM
- **Greeter** LightDM GTK Greeter
- **Desktop Environment** None
- **WM** i3-gaps
- **Launcher** Rofi
- **Panel** Polybar
- **Compositor** Compton
- **GTK+ Theme Switcher** Lxappearance
- **GTK Theme** Oomox
- **Icons** Qogir-manjaro-dark
- **Cursor** Bibata
- **GTK Fonts** Opensans, Vollkorn, Fira Code
- **File Manager** Thunar, Nautilus
- **Web Browser** Firefox
- **Task Manager** HTOP
- **Power Manager** TLP
- **Image Viewer** Viewnior
- **Sound Mixer** PulseAudio
- **Terminal** Tilix, Xfce4-terminal
- **CLI Shell** ZSH
- **Archiver** XArchiver
- **Notification Daemon** Dunst
- **Graphic Editor** GIMP
- **CLI File Manager** Ranger
- **CLI Text Editor** Vim
- **GUI Text Editor** SublimeText
- **CLI Music Player** MPD, Ncmpcpp, Cava
- **GUI Music Player** Rhythmbox
- **Media Player** MPV, SMPlayer, VLC
- **Policy Kit Frontend** Lxpolkit
- **Screenshooter** Scrot, Xfce4-screenshooter
- **Wallpaper Handler** Nitrogen, Pywal

## Keybinds & Mousebinds
- **Super + Enter** launch a terminal
- **Super + Shift + Enter** launch alternative terminal
- **Super + Shift + W** launch firefox
- **Super + Shift + F** launch thunar
- **Super + D** launch Rofi
- **Super + Arrows** change focus
- **Super + Shift + Arrows** move focused window
- **Super + 1-9** switch to workspace 1-9
- **Super + Shift + 1-9** move focused container to workspace 1-9
- **Super + Q** kill focused window
- **Super + F** fullscreen toggle
- **Super + S** layout toggle split
- **Super + W** layout stacking
- **Super + Z** layout tabbed
- **Super + H** split in horizontal orientation
- **Super + V** split in vertical orientation
- **Super + Space** floating toggle
- **Super + Shift + Space** focus mode_toggle
- **Super + Shift + BackSpace** reload the configuration file
- **Super + Shift + r** restart i3
- ..More keybinds just read the *~/.config/i3/config* file

## Notes
- If you want to use this configuration, inspect the code before use.
- Install git
- Clone this repo `git clone --depth=1 https://github.com/berthosefin/birkhoff-i3-gaps ~/.birkhoff-i3-gaps`
- Deploy the dotfiles `cp -a ~/.birkhoff-i3-gaps/. ~`
- Change the default CLI Shell `chsh $(whoami) -s /bin/zsh`
- If you find "birkhoff" in the configuration file, replace it with your own username.
- Edit some system configuration, example in ~/.birkhoff-i3-gaps/.system
- Reboot
- Fix some errors
- Start working
