/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "monospace:size=10", "JoyPixels:pixelsize=8:antialias=true:autohint=true"};

static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
// static const char *colors[SchemeLast][2] = {
//     /*     fg         bg       */
//     [SchemeNorm] = {"#eaeaea", "#20201d"},
//     [SchemeSel] = {"#20201d", "#fabd2f"},
//     [SchemeSelHighlight] = {"#20201d", "#d79921"},
//     [SchemeNormHighlight] = {"#fabd2f", "#20201d"},
//     [SchemeOut] = {"#000000", "#00ffff"},
// };
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#c0caf5", "#1a1b26"},
    [SchemeSel] = {"#1a1b26", "#7aa2f7"},
    [SchemeSelHighlight] = {"#1a1b26", "#5a82d7"},
    [SchemeNormHighlight] = {"#7aa2f7", "#1a1b26"},
    [SchemeOut] = {"#000000", "#00ffff"},
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
