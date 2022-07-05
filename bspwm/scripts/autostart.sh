#!/bin/bash

sh ~/.fehbg
sh ~/.autostart/fix-touchpad.sh
sh ~/.autostart/ProtectYourEyes
#sh ~/.autostart/todesk.sh

arr=("sxhkd" "xfce4-power-manager" "copyq" "fcitx5" "dunst" "xdman" "redshift-gtk" "mpd" "picom" "conky" "~/.config/bspwm/bin/bspbar")

for value in ${arr[@]}
do
    isExist=`ps -ef | grep "$value" | grep -v grep | wc -l`
    if [ $isExist == 0 ]
    then
        exec "$value" &
    fi
done
