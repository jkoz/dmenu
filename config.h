/* See LICENSE file for copyright and license details. */
/* vim: expandtab
 */
/* Default settings; can be overrided by command line. */

static Bool topbar = False;                  /* -b  option; if False, dmenu appears at bottom */
static const char *font = "Cousin:size=11:antialias=true"; /* -fn option; default X11 font or font set      */
static const char *prompt = "» ";           /* -p  option; prompt to the elft of input field */
static const char *normbgcolor = "#002b36"; /* -nb option; normal background                 */
static const char *normfgcolor = "#eee8d5"; /* -nf option; normal foreground                 */
static const char *selbgcolor  = "#859900"; /* -sb option; selected background               */
static const char *selfgcolor  = "#eee8d5"; /* -sf option; selected foreground               */
static const char *outbgcolor  = "#00ffff";
static const char *outfgcolor  = "#000000";
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

