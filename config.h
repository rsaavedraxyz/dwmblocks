//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/  /*Command*/        /*Update-Interval*/  /*Update-Signal*/
    {"",  "sb-blank",          0,   2},
    {"",  "sb-monitor",        0,   13},
    {"",  "sb-notifications",  0,   5},
    {"",  "sb-kaffeine",       0,   4},
    {"",  "sb-mpc",            0,   11},
    {"",  "sb-kbselect",       0,   30},
    {"",  "sb-battery",        60,  3},
    {"",  "sb-calendar",       0,   7},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
