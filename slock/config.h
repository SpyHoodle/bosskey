/* user and group to drop privileges to */
static const char *user  = "spy";
static const char *group = "spy";

/* colour definitions */
static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282C33",   /* after initialization */
	[INPUT] =  "#282C33",   /* during input */
	[FAILED] = "#E06B74",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* monitor height and width */
static const int monheight          = 1440;
static const int monwidth           = 2560;

/* image details */
static const char *imgpath          = "/home/spy/.local/share/slock/locked.xpm";
static const int imgwidth           = 570;
static const int imgheight          = 110;

/* placing the image */
static const int imgoffsetx         = (monwidth/2) - (imgwidth/2);
static const int imgoffsety         = (monheight/2) - (imgheight/2);
static const int showimgonlyatstart = 1;
