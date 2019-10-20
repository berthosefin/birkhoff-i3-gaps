#!/bin/sh

echo -n "\033]0; Conversion GRP Crowlla - Just mi'imby.mp4 (1/3)\007"
/usr/bin/ffmpeg -y -i "/home/birkhoff/Bureau/GRP Crowlla - Just mi'imby.mp4" -acodec libmp3lame -b:a 160k -ac 2 -ar 44100 "/home/birkhoff/GRP Crowlla - Just mi'imby.mp3"
echo -n "\033]0; Conversion GRP Crowlla - Zombies.mp4 (2/3)\007"
/usr/bin/ffmpeg -y -i "/home/birkhoff/Bureau/GRP Crowlla - Zombies.mp4" -acodec libmp3lame -b:a 160k -ac 2 -ar 44100 "/home/birkhoff/GRP Crowlla - Zombies.mp3"
echo -n "\033]0; Conversion Slaan-Pass - Sitrapo.mp4 (3/3)\007"
/usr/bin/ffmpeg -y -i "/home/birkhoff/Bureau/Slaan-Pass - Sitrapo.mp4" -acodec libmp3lame -b:a 160k -ac 2 -ar 44100 "/home/birkhoff/Slaan-Pass - Sitrapo.mp3"

read -p "Appuyez sur Entrée pour continuer" dumbyvar
rm "/home/birkhoff/.winff/ff190926130434.sh"
