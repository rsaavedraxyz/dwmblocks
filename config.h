//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/  /*Command*/        /*Update-Interval*/  /*Update-Signal*/
    {"",  "sb-kaffeine",       0,   4},
    {"",  "sb-notifications",  0,   5},
    {"",  "sb-mpc",            0,   11},
    {"",  "sb-sysmon",         60,  14},
    {"",  "sb-kbselect",       0,   30},
    {"",  "sb-volume",         0,   10},
    {"",  "sb-calendar",       0,   7},
    {"",  "sb-clock",          30,  1},
    {"",  "sb-battery",        60,   3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
