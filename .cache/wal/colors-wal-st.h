const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0B050F", /* black   */
  [1] = "#6C1994", /* red     */
  [2] = "#5B58DD", /* green   */
  [3] = "#9717AA", /* yellow  */
  [4] = "#A920CC", /* blue    */
  [5] = "#E220E7", /* magenta */
  [6] = "#C656E0", /* cyan    */
  [7] = "#a5c3ef", /* white   */

  /* 8 bright colors */
  [8]  = "#7388a7",  /* black   */
  [9]  = "#6C1994",  /* red     */
  [10] = "#5B58DD", /* green   */
  [11] = "#9717AA", /* yellow  */
  [12] = "#A920CC", /* blue    */
  [13] = "#E220E7", /* magenta */
  [14] = "#C656E0", /* cyan    */
  [15] = "#a5c3ef", /* white   */

  /* special colors */
  [256] = "#0B050F", /* background */
  [257] = "#a5c3ef", /* foreground */
  [258] = "#a5c3ef",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
