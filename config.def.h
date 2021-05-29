/* user and group to drop privileges to */
static const char *user  = "marek";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",     /* after initialization */
	[INPUT] =  "#075701",   /* during input */
	[FAILED] = "#750202",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 300;

/* default message */
static const char * message = "message";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
