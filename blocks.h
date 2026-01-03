//Modify this file to change what commands output to your statusbar, and recompile using the make command.
#define BLOCKS_HOME "/home/potato/.config/someblocks/"
#define SCRIPTS BLOCKS_HOME"scripts/"
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", SCRIPTS"ip.sh", 5, 0},
	{" ", SCRIPTS"mem.sh",	5,		0},
	{"󰍛 ", SCRIPTS"cpu.sh",	5,		0},

	{"", "date '+%b %d (%a) %I:%M%p'",					30,		0},
  {"", SCRIPTS"bat.sh", 5, 0},
	
	/* Updates whenever "pkill -SIGRTMIN+10 someblocks" is ran */
	/* {"", "date '+%b %d (%a) %I:%M%p'",					0,		10}, */
};



//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
