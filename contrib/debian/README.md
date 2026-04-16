
Debian
====================
This directory contains files used to package deuteriumcoind/deuteriumcoin-qt
for Debian-based Linux systems. If you compile deuteriumcoind/deuteriumcoin-qt yourself, there are some useful files here.

## deuteriumcoin: URI support ##


deuteriumcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install deuteriumcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your deuteriumcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/deuteriumcoin128.png` to `/usr/share/pixmaps`

deuteriumcoin-qt.protocol (KDE)

