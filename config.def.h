/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                        /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                      /* -c option; centers dmenu on screen */
static int min_width = 500;                   /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */
static const unsigned int alpha = 0xff;       /* Amount of opacity. 0xff is opaque, 0xcc is transparent as st */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:size=11"
};

static const char *colors[SchemeLast][2] = {
	/*     fg         bg     */
	[SchemeNorm] = { "#bbbbbb", "#000000" },
	[SchemeSel]  = { "#eeeeee", "#005577" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel]  = { OPAQUE, alpha },
	[SchemeOut]  = { OPAQUE, alpha },
};

/* -p  option; prompt to the left of input field */
static const char *prompt = NULL;

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";