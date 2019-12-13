const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#011B34", /* black   */
  [1] = "#90AC29", /* red     */
  [2] = "#A7C93B", /* green   */
  [3] = "#98AB5A", /* yellow  */
  [4] = "#AECB61", /* blue    */
  [5] = "#A8B4A8", /* magenta */
  [6] = "#B5CC9C", /* cyan    */
  [7] = "#dbe4ca", /* white   */

  /* 8 bright colors */
  [8]  = "#999f8d",  /* black   */
  [9]  = "#90AC29",  /* red     */
  [10] = "#A7C93B", /* green   */
  [11] = "#98AB5A", /* yellow  */
  [12] = "#AECB61", /* blue    */
  [13] = "#A8B4A8", /* magenta */
  [14] = "#B5CC9C", /* cyan    */
  [15] = "#dbe4ca", /* white   */

  /* special colors */
  [256] = "#011B34", /* background */
  [257] = "#dbe4ca", /* foreground */
  [258] = "#dbe4ca",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
