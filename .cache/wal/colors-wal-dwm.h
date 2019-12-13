static const char norm_fg[] = "#dbe4ca";
static const char norm_bg[] = "#011B34";
static const char norm_border[] = "#999f8d";

static const char sel_fg[] = "#dbe4ca";
static const char sel_bg[] = "#A7C93B";
static const char sel_border[] = "#dbe4ca";

static const char urg_fg[] = "#dbe4ca";
static const char urg_bg[] = "#90AC29";
static const char urg_border[] = "#90AC29";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
