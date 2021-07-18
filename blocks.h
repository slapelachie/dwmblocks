//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/						/*Update Interval*/	/*Update Signal*/
	{"",		"$HOME/.config/dwm/bar/spotify.sh",			5,			14},
	{"",		"$HOME/.config/dwm/bar/updates.sh",			60,			12},
	{"",		"$HOME/.config/dwm/bar/crypto.py",			60,			13},
	{"",		"$HOME/.config/dwm/bar/cpu_temp.sh",		5,			13},
	{"",		"$HOME/.config/dwm/bar/network.sh",			60,			11},
	{"",		"$HOME/.config/dwm/bar/volume.sh",			60,			10},
	{"", 		"$HOME/.config/dwm/bar/date.sh",			10,			13}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '\0';
