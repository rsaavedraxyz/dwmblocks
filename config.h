//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0}, */

	/* {"", "date '+%b %d (%a) %I:%M%p'",					5,		0}, */
    {"",   "sb-mpc",      0,     11},
    {"",   "sb-weather",  18000, 5},
    {"",   "sb-memory",   10,    14},
    {"",   "sb-kbselect", 0,     30},
    {"",   "sb-clock",    60,    1},
    {"",   "sb-battery",  5,     3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 5;
