static const char norm_fg[] = "#a5c3ef";
static const char norm_bg[] = "#0B050F";
static const char norm_border[] = "#7388a7";

static const char sel_fg[] = "#a5c3ef";
static const char sel_bg[] = "#5B58DD";
static const char sel_border[] = "#a5c3ef";

static const char urg_fg[] = "#a5c3ef";
static const char urg_bg[] = "#6C1994";
static const char urg_border[] = "#6C1994";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
