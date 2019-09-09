/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf --global-table -t gnulib/lib/uninorm/composition-table.gperf  */
/* Computed positions: -k'2-3,6' */


#define TOTAL_KEYWORDS 940
#define MIN_WORD_LENGTH 6
#define MAX_WORD_LENGTH 6
#define MIN_HASH_VALUE 5
#define MAX_HASH_VALUE 2215
/* maximum key range = 2211, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
gl_uninorm_compose_hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
        35,    5,    0,   15,  290,  660,  640,  310,   20,  165,
       585,   26,  846,  675,  271,  136,  515,  362,    1,  512,
       570,  710,  681,   11,  187,  375,   86,  380,  950, 2216,
       110,   65,  837,  242, 1010,  720,  960,  866,  757,  240,
        71,  325,  116,  442,   61,  986,   25,  416,  665,   21,
       805,  396, 2216,  906,  800,  701,  102,  250,  330, 2216,
       235,  905,  521,  695,  200,  445,  585,   10,  167,  835,
        60,  236,  156,  305,    5, 1021,  606,  396,  381,  900,
       477,  767,  196,  976,  546, 1010,  856,  296,  371,    1,
        22, 1005, 2216, 1015, 2216,  995,  512,  130,  337,   87,
       331,  490,  786,  466,   56,  210,  702,   27,  841,  437,
       241,  620,  181, 2216,  540,  951, 1020,  665,  450,  436,
        92,  121,   47,  705,   65,  530, 2216,    1, 2216, 2216,
       520,  510, 2216, 2216,  500,  495, 2216, 2216, 2216, 2216,
      2216, 2216, 2216, 2216,  185,  941,  675, 2216,  175,  642,
      2216,  367, 2216,  906,  135,  255, 2216,  945, 2216,  597,
        82,    2,  480, 2216, 2216,   92,  925, 2216,  385,  296,
      2216,  700,   26,  915,    6,  232,  182,  656,  425,  430,
       420,  895,  500,  771,  180,  536, 2216,  635, 2216,  875,
        80,  761, 2216,  565,  742,   25,  610,  736,  435,  370,
       865,  262,    2,   15,  255,  225,  150,  985,  230, 2216,
       446, 2216,  322,  185,   60,   20, 1020,  196, 2216,  595,
       412, 2216, 2216, 2216,  295, 2216,  647, 2216,  945,  140,
       940,   85,  145,    5,  372,  935, 2216, 2216, 2216,  775,
       790,  765,  750, 2216,  592,  100,   85, 2216,   15, 2216,
      2216, 2216,  562,  725,  862, 2216, 2216
    };
  return asso_values[(unsigned char)str[5]+1] + asso_values[(unsigned char)str[2]] + asso_values[(unsigned char)str[1]];
}

static const unsigned char lengthtable[] =
  {
     0,  0,  0,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  0,  0,  6,  0,  0,  6,  0,  6,  0,  0,  6,  6,  6,
     0,  0,  6,  0,  0,  0,  0,  6,  6,  6,  0,  0,  6,  6,
     6,  0,  0,  6,  0,  6,  0,  0,  6,  6,  0,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,
     6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,
     6,  0,  0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  0,  6,  0,  6,  6,  6,  0,  0,
     6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,
     6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  6,  0,  6,
     6,  6,  0,  0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,
     6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,  6,  6,
     6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,
     6,  0,  0,  0,  6,  6,  6,  6,  0,  6,  6,  6,  0,  0,
     6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,
     0,  0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,
     6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,
     6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,  6,
     6,  6,  0,  0,  6,  0,  6,  0,  0,  6,  6,  6,  0,  0,
     6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  6,  0,  6,  6,  6,  0,  0,  0,  6,  6,
     6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,
     6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  6,  0,  0,  6,  0,  6,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  0,
     6,  0,  0,  6,  0,  6,  0,  0,  6,  6,  6,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  6,  0,
     6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  0,  6,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,
     6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,
     6,  0,  6,  6,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,
     6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,
     6,  6,  6,  0,  0,  6,  6,  0,  0,  0,  6,  0,  6,  0,
     0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  6,  0,  0,  6,  0,  6,  0,  0,  6,  6,
     0,  0,  0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,
     6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,  6,  6,
     0,  0,  6,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,
     6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,
     0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,
     6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  6,  0,
     6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,
     6,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,
     6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,
     6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,
     6,  0,  0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,
     6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,
     0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  0,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,  6,  6,
     6,  0,  0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  6,
     6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,
     0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,  6,
     6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,  6,
     6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,
     6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,  0,  0,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  6,
     0,  0,  0,  6,  6,  6,  6,  0,  6,  6,  6,  0,  0,  6,
     6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  6,  6,  0,  0,
     6,  6,  0,  0,  0,  6,  6,  6,  0,  0,  6,  0,  6,  0,
     0,  6,  0,  0,  0,  0,  6,  6,  0,  0,  0,  6,  6,  0,
     0,  0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  6,
     0,  0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,  6,
     6,  0,  0,  0,  6,  6,  6,  0,  0,  6,  6,  0,  0,  0,
     6,  6,  6,  0,  0,  6,  6,  0,  0,  0,  6,  6,  0,  0,
     0,  6,  6,  0,  0,  0,  6,  0,  0,  0,  0,  6,  6,  0,
     0,  0,  6,  6,  6,  0,  0,  6,  6,  6,  0,  0,  6,  0,
     0,  0,  0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,
     6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  0,  0,  0,  0,
     6,  0,  0,  0,  0,  6,  0,  0,  0,  0,  6,  6,  6,  0,
     0,  6,  6,  6,  0,  0,  6,  0,  0,  0,  0,  6,  6,  0,
     6,  0,  6,  6,  6,  0,  0,  6,  0,  0,  0,  0,  6,  6,
     0,  6,  0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,
     6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  0,
     6,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  6,  0,  0,
     0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  6,  0,
     0,  0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  0,
     0,  0,  0,  6,  0,  0,  0,  0,  6,  0,  0,  0,  0,  6,
     6,  0,  0,  0,  6,  0,  0,  0,  0,  6,  0,  0,  0,  0,
     6,  6,  6,  0,  0,  6,  6,  0,  0,  0,  6,  6,  0,  0,
     0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  6,  6,
     0,  0,  6,  6,  0,  0,  0,  6,  0,  0,  0,  0,  6,  6,
     0,  0,  0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,
     0,  0,  0,  0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  0,
     6,  0,  0,  0,  0,  6,  6,  0,  0,  0,  6,  0,  0,  0,
     0,  6,  0,  0,  0,  0,  6,  6,  0,  0,  0,  6,  0,  0,
     0,  0,  6,  0,  0,  0,  0,  6,  0,  0,  0,  0,  6,  0,
     0,  0,  0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,
     6,  6,  0,  0,  6,  0,  0,  0,  0,  6,  0,  0,  0,  0,
     6,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  0,  0,  0,
     0,  6,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  0,  0,
     0,  0,  6,  0,  0,  0,  0,  6,  0,  0,  0,  0,  6,  6,
     0,  0,  0,  6,  0,  0,  0,  0,  6,  6,  0,  0,  0,  6,
     6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  0,  0,  0,  0,
     6,  0,  0,  0,  0,  6,  0,  0,  0,  0,  6,  0,  6,  0,
     0,  6,  0,  0,  0,  0,  6,  0,  0,  0,  0,  6,  6,  0,
     0,  0,  6,  6,  0,  0,  0,  6,  0,  0,  0,  0,  6,  0,
     0,  0,  0,  6,  0,  6,  0,  0,  6,  0,  0,  0,  0,  6,
     6,  0,  0,  0,  6,  0,  0,  0,  0,  6,  0,  0,  0,  0,
     6,  6,  0,  0,  0,  6,  0,  0,  0,  0,  6,  0,  0,  0,
     0,  6,  6,  0,  0,  0,  6,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  6,  0,  0,  0,  6,  6,  0,  0,  0,  6,  6,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,
     6,  6,  0,  0,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  6,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  6,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0,
     6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     6,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0,  6,  0,  0,
     0,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,
     6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  6,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,
     0,  0,  0,  6
  };

static const struct composition_rule wordlist[] =
  {
    {""}, {""}, {""}, {""}, {""},
#line 572 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\002\000\003\001", 0x1eae},
#line 425 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\022\000\003\001", 0x1e16},
#line 617 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\241\000\003\001", 0x1edb},
    {""}, {""},
#line 574 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\002\000\003\000", 0x1eb0},
#line 423 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\022\000\003\000", 0x1e14},
#line 619 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\241\000\003\000", 0x1edd},
    {""}, {""}, {""}, {""},
#line 291 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\312\000\003\001", 0x0390},
    {""}, {""},
#line 573 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\003\000\003\001", 0x1eaf},
    {""},
#line 828 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\312\000\003\000", 0x1fd2},
    {""}, {""},
#line 575 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\003\000\003\000", 0x1eb1},
#line 557 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\177\000\003\007", 0x1e9b},
#line 830 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\312\000\003B", 0x1fd7},
    {""}, {""},
#line 298 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\313\000\003\001", 0x03b0},
    {""}, {""}, {""}, {""},
#line 839 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\313\000\003\000", 0x1fe2},
#line 56 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Y\000\003\001", 0x00dd},
#line 588 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\312\000\003\001", 0x1ebe},
    {""}, {""},
#line 843 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\313\000\003B", 0x1fe7},
#line 640 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Y\000\003\000", 0x1ef2},
#line 590 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\312\000\003\000", 0x1ec0},
    {""}, {""},
#line 90 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000C\000\003\001", 0x0106},
    {""},
#line 503 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001Z\000\003\007", 0x1e64},
    {""}, {""},
#line 238 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\370\000\003\001", 0x01ff},
#line 183 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Y\000\003\002", 0x0176},
    {""}, {""}, {""},
#line 129 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000J\000\003\002", 0x0134},
#line 545 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Y\000\003\007", 0x1e8e},
#line 186 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Z\000\003\001", 0x0179},
    {""}, {""},
#line 92 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000C\000\003\002", 0x0108},
#line 523 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001h\000\003\001", 0x1e78},
#line 452 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000k\000\003\001", 0x1e31},
    {""}, {""},
#line 94 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000C\000\003\007", 0x010a},
#line 730 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037Y\000\003\001", 0x1f5d},
    {""}, {""}, {""},
#line 653 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\001\000\003\001", 0x1f05},
#line 729 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037Y\000\003\000", 0x1f5b},
#line 547 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Z\000\003\002", 0x1e90},
    {""}, {""},
#line 651 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\001\000\003\000", 0x1f03},
#line 731 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037Y\000\003B", 0x1f5f},
#line 188 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Z\000\003\007", 0x017b},
    {""}, {""},
#line 655 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\001\000\003B", 0x1f07},
#line 817 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\256\000\003E", 0x1fc4},
#line 187 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000z\000\003\001", 0x017a},
    {""}, {""},
#line 660 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\010\000\003\001", 0x1f0c},
#line 697 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0371\000\003\001", 0x1f35},
#line 616 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\240\000\003\001", 0x1eda},
    {""}, {""},
#line 658 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\010\000\003\000", 0x1f0a},
#line 695 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0371\000\003\000", 0x1f33},
#line 618 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\240\000\003\000", 0x1edc},
    {""}, {""},
#line 662 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\010\000\003B", 0x1f0e},
#line 699 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0371\000\003B", 0x1f37},
#line 548 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000z\000\003\002", 0x1e91},
    {""}, {""},
#line 652 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\000\000\003\001", 0x1f04},
#line 807 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\254\000\003E", 0x1fb4},
#line 189 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000z\000\003\007", 0x017c},
    {""}, {""},
#line 650 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\000\000\003\000", 0x1f02},
#line 119 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000h\000\003\002", 0x0125},
#line 289 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\245\000\003\001", 0x038e},
    {""}, {""},
#line 654 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\000\000\003B", 0x1f06},
#line 438 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000h\000\003\007", 0x1e23},
#line 846 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\245\000\003\000", 0x1fea},
    {""}, {""},
#line 433 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000F\000\003\007", 0x1e1e},
#line 37 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000C\000\003'", 0x00c7},
    {""}, {""}, {""},
#line 412 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\347\000\003\001", 0x1e09},
#line 744 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037h\000\003\001", 0x1f6c},
#line 91 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000c\000\003\001", 0x0107},
    {""}, {""},
#line 757 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\002\000\003E", 0x1f82},
#line 742 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037h\000\003\000", 0x1f6a},
#line 571 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\036\241\000\003\002", 0x1ead},
    {""}, {""},
#line 756 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\001\000\003E", 0x1f81},
#line 746 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037h\000\003B", 0x1f6e},
    {""},
#line 132 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000k\000\003'", 0x0137},
    {""},
#line 480 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\365\000\003\001", 0x1e4d},
#line 688 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037(\000\003\001", 0x1f2c},
#line 93 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000c\000\003\002", 0x0109},
    {""}, {""},
#line 758 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\003\000\003E", 0x1f83},
#line 686 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037(\000\003\000", 0x1f2a},
#line 95 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000c\000\003\007", 0x010b},
    {""}, {""},
#line 763 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\010\000\003E", 0x1f88},
#line 690 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037(\000\003B", 0x1f2e},
#line 542 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000x\000\003\007", 0x1e8b},
    {""}, {""},
#line 785 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037.\000\003E", 0x1f9e},
#line 766 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\013\000\003E", 0x1f8b},
#line 798 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037k\000\003E", 0x1fab},
    {""}, {""},
#line 506 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001a\000\003\007", 0x1e67},
#line 82 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000y\000\003\001", 0x00fd},
    {""}, {""}, {""},
#line 755 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\000\000\003E", 0x1f80},
#line 641 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000y\000\003\000", 0x1ef3},
#line 444 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000h\000\003'", 0x1e29},
    {""}, {""},
#line 58 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\001", 0x00e1},
#line 242 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\021", 0x0203},
#line 704 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0378\000\003\001", 0x1f3c},
    {""}, {""},
#line 57 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\000", 0x00e0},
#line 184 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000y\000\003\002", 0x0177},
#line 702 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0378\000\003\000", 0x1f3a},
    {""}, {""},
#line 234 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\345\000\003\001", 0x01fb},
#line 546 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000y\000\003\007", 0x1e8f},
#line 706 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0378\000\003B", 0x1f3e},
    {""}, {""},
#line 59 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\002", 0x00e2},
#line 795 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037h\000\003E", 0x1fa8},
#line 556 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000y\000\003\012", 0x1e99},
    {""}, {""},
#line 270 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\007", 0x0227},
#line 783 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037,\000\003E", 0x1f9c},
#line 631 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\260\000\003\001", 0x1ee9},
    {""}, {""},
#line 849 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037|\000\003E", 0x1ff2},
#line 62 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\012", 0x00e5},
#line 633 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\260\000\003\000", 0x1eeb},
#line 63 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000c\000\003'", 0x00e7},
    {""},
#line 737 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037a\000\003\001", 0x1f65},
#line 779 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037(\000\003E", 0x1f98},
#line 526 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001k\000\003\010", 0x1e7b},
    {""}, {""},
#line 735 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037a\000\003\000", 0x1f63},
#line 185 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Y\000\003\010", 0x0178},
    {""}, {""}, {""},
#line 739 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037a\000\003B", 0x1f67},
#line 118 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000H\000\003\002", 0x0124},
#line 570 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\036\240\000\003\002", 0x1eac},
    {""}, {""},
#line 853 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\366\000\003E", 0x1ff7},
#line 437 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000H\000\003\007", 0x1e22},
#line 790 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037c\000\003E", 0x1fa3},
    {""}, {""},
#line 524 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001i\000\003\001", 0x1e79},
#line 488 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000p\000\003\001", 0x1e55},
#line 508 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\036c\000\003\007", 0x1e69},
    {""}, {""},
#line 479 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\325\000\003\001", 0x1e4c},
#line 718 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037H\000\003\001", 0x1f4c},
#line 413 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000D\000\003\007", 0x1e0a},
    {""}, {""},
#line 851 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\316\000\003E", 0x1ff4},
#line 716 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037H\000\003\000", 0x1f4a},
#line 421 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000D\000\003-", 0x1e12},
    {""}, {""},
#line 661 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\011\000\003\001", 0x1f0d},
#line 151 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000R\000\003\001", 0x0154},
#line 257 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000R\000\003\021", 0x0212},
    {""}, {""},
#line 659 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\011\000\003\000", 0x1f0b},
#line 490 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000p\000\003\007", 0x1e57},
#line 630 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\257\000\003\001", 0x1ee8},
    {""}, {""},
#line 663 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\011\000\003B", 0x1f0f},
#line 781 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037*\000\003E", 0x1f9a},
#line 632 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\257\000\003\000", 0x1eea},
    {""}, {""},
#line 69 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003\001", 0x00ed},
#line 250 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003\021", 0x020b},
    {""}, {""}, {""},
#line 68 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003\000", 0x00ec},
#line 491 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000R\000\003\007", 0x1e58},
#line 674 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\030\000\003\001", 0x1f1c},
    {""}, {""},
#line 788 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037a\000\003E", 0x1fa1},
#line 442 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000h\000\003\010", 0x1e27},
#line 672 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\030\000\003\000", 0x1f1a},
    {""}, {""},
#line 70 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003\002", 0x00ee},
#line 770 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\017\000\003E", 0x1f8f},
#line 443 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000H\000\003'", 0x1e28},
    {""}, {""},
#line 712 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037@\000\003\001", 0x1f44},
#line 448 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\0030", 0x1e2d},
    {""}, {""}, {""},
#line 710 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037@\000\003\000", 0x1f42},
#line 229 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000G\000\003\001", 0x01f4},
#line 293 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\245\000\003\010", 0x03ab},
#line 419 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000D\000\003'", 0x1e10},
    {""},
#line 745 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037i\000\003\001", 0x1f6d},
#line 140 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000n\000\003\001", 0x0144},
#line 303 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\311\000\003\001", 0x03ce},
    {""}, {""},
#line 743 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037i\000\003\000", 0x1f6b},
#line 232 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000n\000\003\000", 0x01f9},
#line 754 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\311\000\003\000", 0x1f7c},
    {""}, {""},
#line 747 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037i\000\003B", 0x1f6f},
#line 110 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000G\000\003\002", 0x011c},
#line 852 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\311\000\003B", 0x1ff6},
    {""}, {""},
#line 764 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\011\000\003E", 0x1f89},
#line 114 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000G\000\003\007", 0x0120},
#line 544 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000x\000\003\010", 0x1e8d},
    {""}, {""},
#line 578 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\002\000\003\003", 0x1eb4},
#line 472 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000n\000\003\007", 0x1e45},
#line 623 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\241\000\003\003", 0x1ee1},
    {""}, {""},
#line 482 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\365\000\003\010", 0x1e4f},
#line 478 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000n\000\003-", 0x1e4b},
#line 153 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000R\000\003'", 0x0156},
    {""}, {""},
#line 596 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\036\270\000\003\002", 0x1ec6},
#line 805 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037p\000\003E", 0x1fb2},
#line 681 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037!\000\003\001", 0x1f25},
    {""}, {""},
#line 579 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\003\000\003\003", 0x1eb5},
#line 290 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\251\000\003\001", 0x038f},
#line 679 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037!\000\003\000", 0x1f23},
    {""}, {""},
#line 705 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0379\000\003\001", 0x1f3d},
#line 855 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\251\000\003\000", 0x1ffa},
#line 683 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037!\000\003B", 0x1f27},
    {""}, {""},
#line 703 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0379\000\003\000", 0x1f3b},
#line 83 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000y\000\003\010", 0x00ff},
    {""}, {""}, {""},
#line 707 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0379\000\003B", 0x1f3f},
#line 646 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Y\000\003\003", 0x1ef8},
#line 594 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\312\000\003\003", 0x1ec4},
    {""}, {""},
#line 61 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\010", 0x00e4},
#line 533 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000W\000\003\001", 0x1e82},
    {""}, {""}, {""},
#line 796 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037i\000\003E", 0x1fa9},
#line 531 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000W\000\003\000", 0x1e80},
#line 850 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\311\000\003E", 0x1ff3},
    {""}, {""},
#line 43 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003\001", 0x00cd},
#line 249 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003\021", 0x020a},
#line 116 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000G\000\003'", 0x0122},
    {""}, {""},
#line 42 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003\000", 0x00cc},
#line 181 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000W\000\003\002", 0x0174},
#line 142 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000n\000\003'", 0x0146},
    {""}, {""},
#line 615 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\036\315\000\003\002", 0x1ed9},
#line 537 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000W\000\003\007", 0x1e86},
    {""}, {""}, {""},
#line 44 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003\002", 0x00ce},
#line 441 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000H\000\003\010", 0x1e26},
#line 606 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\324\000\003\001", 0x1ed0},
    {""}, {""},
#line 128 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003\007", 0x0130},
#line 447 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\0030", 0x1e2c},
#line 608 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\324\000\003\000", 0x1ed2},
    {""}, {""},
#line 778 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037'\000\003E", 0x1f97},
#line 801 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037n\000\003E", 0x1fae},
#line 772 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037!\000\003E", 0x1f91},
    {""}, {""},
#line 719 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037I\000\003\001", 0x1f4d},
#line 856 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\251\000\003E", 0x1ffc},
    {""}, {""}, {""},
#line 717 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037I\000\003\000", 0x1f4b},
#line 310 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\032\000\003\001", 0x040c},
#line 622 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\240\000\003\003", 0x1ee0},
    {""}, {""},
#line 614 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\036\314\000\003\002", 0x1ed8},
#line 431 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\002(\000\003\006", 0x1e1c},
#line 286 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\227\000\003\001", 0x0389},
    {""}, {""},
#line 481 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\325\000\003\010", 0x1e4e},
#line 414 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000d\000\003\007", 0x1e0b},
#line 821 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\227\000\003\000", 0x1fca},
    {""}, {""},
#line 689 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037)\000\003\001", 0x1f2d},
#line 422 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000d\000\003-", 0x1e13},
#line 406 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000b\000\003\007", 0x1e03},
    {""}, {""},
#line 687 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037)\000\003\000", 0x1f2b},
#line 769 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\016\000\003E", 0x1f8e},
#line 320 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0048\000\003\000", 0x045d},
    {""}, {""},
#line 691 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037)\000\003B", 0x1f2f},
#line 486 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001M\000\003\001", 0x1e53},
    {""}, {""}, {""},
#line 411 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\307\000\003\001", 0x1e08},
#line 484 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001M\000\003\000", 0x1e51},
#line 589 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\352\000\003\001", 0x1ebf},
    {""}, {""},
#line 71 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003\010", 0x00ef},
    {""},
#line 591 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\352\000\003\000", 0x1ec1},
    {""}, {""},
#line 759 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\004\000\003E", 0x1f84},
#line 139 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000N\000\003\001", 0x0143},
#line 844 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\245\000\003\006", 0x1fe8},
    {""}, {""},
#line 283 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\250\000\003\001", 0x0385},
#line 231 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000N\000\003\000", 0x01f8},
#line 581 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\036\241\000\003\006", 0x1eb7},
    {""}, {""},
#line 848 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\250\000\003\000", 0x1fed},
#line 541 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000X\000\003\007", 0x1e8a},
#line 669 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\021\000\003\001", 0x1f15},
    {""}, {""},
#line 814 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\250\000\003B", 0x1fc1},
#line 465 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000M\000\003\001", 0x1e3e},
#line 667 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\021\000\003\000", 0x1f13},
    {""}, {""},
#line 762 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\007\000\003E", 0x1f87},
#line 471 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000N\000\003\007", 0x1e44},
#line 420 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000d\000\003'", 0x1e11},
    {""}, {""},
#line 675 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\031\000\003\001", 0x1f1d},
#line 477 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000N\000\003-", 0x1e4a},
#line 822 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\227\000\003E", 0x1fcc},
    {""}, {""},
#line 673 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\031\000\003\000", 0x1f1b},
#line 647 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000y\000\003\003", 0x1ef9},
#line 206 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\334\000\003\001", 0x01d7},
    {""}, {""},
#line 780 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037)\000\003E", 0x1f99},
#line 467 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000M\000\003\007", 0x1e40},
#line 210 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\334\000\003\000", 0x01db},
    {""},
#line 962 "gnulib/lib/uninorm/composition-table.gperf"
    {"\001\0211\001\021'", 0x1112e},
#line 60 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\003", 0x00e3},
#line 791 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037d\000\003E", 0x1fa4},
    {""}, {""}, {""},
#line 345 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\351\000\003\010", 0x04eb},
#line 304 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\322\000\003\001", 0x03d3},
#line 789 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037b\000\003E", 0x1fa2},
    {""}, {""},
#line 351 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004C\000\003\010", 0x04f1},
#line 336 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\027\000\003\010", 0x04de},
#line 507 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\036b\000\003\007", 0x1e68},
    {""}, {""},
#line 235 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\306\000\003\001", 0x01fc},
#line 534 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000w\000\003\001", 0x1e83},
#line 466 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000m\000\003\001", 0x1e3f},
    {""}, {""},
#line 87 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\006", 0x0103},
#line 532 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000w\000\003\000", 0x1e81},
#line 637 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\260\000\003\003", 0x1eef},
    {""}, {""},
#line 32 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\001", 0x00c1},
#line 241 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\021", 0x0202},
#line 311 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\030\000\003\000", 0x040d},
    {""}, {""},
#line 31 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\000", 0x00c0},
#line 182 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000w\000\003\002", 0x0175},
#line 141 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000N\000\003'", 0x0145},
    {""}, {""},
#line 89 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003(", 0x0105},
#line 538 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000w\000\003\007", 0x1e87},
#line 468 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000m\000\003\007", 0x1e41},
    {""}, {""},
#line 33 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\002", 0x00c2},
#line 535 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000W\000\003\010", 0x1e84},
#line 555 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000w\000\003\012", 0x1e98},
    {""}, {""},
#line 269 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\007", 0x0226},
#line 230 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000g\000\003\001", 0x01f5},
#line 580 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\036\240\000\003\006", 0x1eb6},
    {""}, {""},
#line 45 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003\010", 0x00cf},
#line 36 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\012", 0x00c5},
#line 446 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000h\000\003.", 0x1e2b},
    {""}, {""},
#line 713 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037A\000\003\001", 0x1f45},
    {""},
#line 487 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000P\000\003\001", 0x1e54},
    {""}, {""},
#line 711 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037A\000\003\000", 0x1f43},
#line 111 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000g\000\003\002", 0x011d},
#line 426 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\023\000\003\001", 0x1e17},
    {""}, {""},
#line 875 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000<\000\0038", 0x226e},
#line 115 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000g\000\003\007", 0x0121},
#line 424 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\023\000\003\000", 0x1e15},
    {""}, {""},
#line 65 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003\001", 0x00e9},
#line 246 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003\021", 0x0207},
#line 636 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\257\000\003\003", 0x1eee},
    {""}, {""},
#line 64 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003\000", 0x00e8},
    {""},
#line 489 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000P\000\003\007", 0x1e56},
    {""}, {""},
#line 121 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003\003", 0x0129},
    {""},
#line 505 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001`\000\003\007", 0x1e66},
    {""}, {""},
#line 66 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003\002", 0x00ea},
#line 786 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037/\000\003E", 0x1f9f},
#line 724 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037P\000\003\001", 0x1f54},
    {""}, {""},
#line 105 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003\007", 0x0117},
#line 430 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\0030", 0x1e1b},
#line 722 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037P\000\003\000", 0x1f52},
    {""}, {""},
#line 428 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003-", 0x1e19},
#line 297 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\271\000\003\001", 0x03af},
#line 726 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037P\000\003B", 0x1f56},
    {""}, {""},
#line 125 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003\006", 0x012d},
#line 751 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\271\000\003\000", 0x1f76},
#line 341 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0048\000\003\010", 0x04e5},
#line 371 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\013G\000\013V", 0x0b48},
    {""},
#line 819 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\306\000\003E", 0x1fc7},
#line 829 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\271\000\003B", 0x1fd6},
#line 800 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037m\000\003E", 0x1fad},
    {""}, {""},
#line 342 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\036\000\003\010", 0x04e6},
#line 72 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000n\000\003\003", 0x00f1},
#line 782 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037+\000\003E", 0x1f9b},
    {""}, {""},
#line 127 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003(", 0x012f},
#line 543 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000X\000\003\010", 0x1e8c},
#line 117 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000g\000\003'", 0x0123},
    {""}, {""},
#line 152 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000r\000\003\001", 0x0155},
#line 258 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000r\000\003\021", 0x0213},
#line 736 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037`\000\003\001", 0x1f64},
    {""}, {""},
#line 668 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\020\000\003\001", 0x1f14},
#line 112 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000G\000\003\006", 0x011e},
#line 734 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037`\000\003\000", 0x1f62},
    {""}, {""},
#line 666 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\020\000\003\000", 0x1f12},
    {""},
#line 738 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037`\000\003B", 0x1f66},
    {""}, {""},
#line 576 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\002\000\003\011", 0x1eb2},
#line 794 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037g\000\003E", 0x1fa7},
#line 621 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\241\000\003\011", 0x1edf},
    {""}, {""},
#line 492 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000r\000\003\007", 0x1e59},
#line 272 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003'", 0x0229},
#line 207 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\374\000\003\001", 0x01d8},
    {""}, {""},
#line 344 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\350\000\003\010", 0x04ea},
#line 509 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000T\000\003\007", 0x1e6a},
#line 211 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\374\000\003\000", 0x01dc},
    {""}, {""},
#line 577 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\003\000\003\011", 0x1eb3},
#line 515 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000T\000\003-", 0x1e70},
#line 445 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000H\000\003.", 0x1e2a},
    {""}, {""},
#line 321 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004C\000\003\006", 0x045e},
#line 485 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001L\000\003\001", 0x1e52},
#line 288 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\237\000\003\001", 0x038c},
    {""}, {""},
#line 792 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037e\000\003E", 0x1fa5},
#line 483 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001L\000\003\000", 0x1e50},
#line 854 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\237\000\003\000", 0x1ff8},
    {""}, {""},
#line 319 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004:\000\003\001", 0x045c},
#line 644 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Y\000\003\011", 0x1ef6},
#line 592 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\312\000\003\011", 0x1ec2},
    {""}, {""},
#line 809 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\266\000\003E", 0x1fb7},
#line 305 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\322\000\003\010", 0x03d4},
#line 607 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\364\000\003\001", 0x1ed1},
    {""}, {""},
#line 120 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003\003", 0x0128},
    {""},
#line 609 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\364\000\003\000", 0x1ed3},
#line 373 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\013G\000\013W", 0x0b4c},
    {""},
#line 432 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\002)\000\003\006", 0x1e1d},
#line 536 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000w\000\003\010", 0x1e85},
#line 787 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037`\000\003E", 0x1fa0},
    {""}, {""},
#line 405 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000B\000\003\007", 0x1e02},
#line 133 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000L\000\003\001", 0x0139},
#line 340 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\030\000\003\010", 0x04e4},
    {""}, {""},
#line 35 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\010", 0x00c4},
#line 154 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000r\000\003'", 0x0157},
#line 612 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\324\000\003\003", 0x1ed6},
    {""}, {""},
#line 124 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003\006", 0x012c},
#line 333 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\331\000\003\010", 0x04db},
#line 165 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000T\000\003'", 0x0162},
    {""}, {""},
#line 74 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\001", 0x00f3},
#line 254 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\021", 0x020f},
#line 285 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\225\000\003\001", 0x0388},
    {""}, {""},
#line 73 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\000", 0x00f2},
#line 597 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\036\271\000\003\002", 0x1ec7},
#line 820 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\225\000\003\000", 0x1fc8},
    {""}, {""},
#line 126 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003(", 0x012e},
#line 463 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000L\000\003-", 0x1e3c},
#line 859 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000!\224\000\0038", 0x21ae},
    {""}, {""},
#line 75 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\002", 0x00f4},
#line 294 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\261\000\003\001", 0x03ac},
#line 620 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\240\000\003\011", 0x1ede},
    {""}, {""},
#line 278 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\007", 0x022f},
#line 748 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\261\000\003\000", 0x1f70},
#line 857 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000!\220\000\0038", 0x219a},
    {""}, {""},
#line 240 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\017", 0x0201},
#line 808 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\261\000\003B", 0x1fb6},
#line 563 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\342\000\003\001", 0x1ea5},
    {""}, {""},
#line 279 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\002.\000\003\004", 0x0230},
#line 317 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0043\000\003\001", 0x0453},
#line 565 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\342\000\003\000", 0x1ea7},
    {""}, {""},
#line 67 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003\010", 0x00eb},
#line 355 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004G\000\003\010", 0x04f5},
    {""}, {""}, {""},
#line 354 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004'\000\003\010", 0x04f4},
#line 281 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Y\000\003\004", 0x0232},
#line 595 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\352\000\003\003", 0x1ec5},
    {""}, {""},
#line 79 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\001", 0x00fa},
#line 262 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\021", 0x0217},
#line 314 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0048\000\003\006", 0x0439},
    {""}, {""},
#line 78 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\000", 0x00f9},
#line 46 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000N\000\003\003", 0x00d1},
    {""}, {""}, {""},
#line 765 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\012\000\003E", 0x1f8a},
    {""},
#line 135 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000L\000\003'", 0x013b},
    {""}, {""},
#line 80 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\002", 0x00fb},
#line 299 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\271\000\003\010", 0x03ca},
    {""}, {""}, {""},
#line 96 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000C\000\003\014", 0x010c},
#line 520 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\0030", 0x1e75},
#line 860 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000!\320\000\0038", 0x21cd},
    {""}, {""},
#line 522 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003-", 0x1e77},
#line 176 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\012", 0x016f},
#line 847 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\241\000\003\024", 0x1fec},
    {""}, {""},
#line 696 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0370\000\003\001", 0x1f34},
#line 806 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\261\000\003E", 0x1fb3},
#line 190 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Z\000\003\014", 0x017d},
    {""}, {""},
#line 694 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0370\000\003\000", 0x1f32},
    {""},
#line 221 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000k\000\003\014", 0x01e9},
    {""}, {""},
#line 698 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0370\000\003B", 0x1f36},
#line 645 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000y\000\003\011", 0x1ef7},
    {""}, {""}, {""},
#line 802 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037o\000\003E", 0x1faf},
#line 255 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000R\000\003\017", 0x0210},
    {""}, {""}, {""},
#line 561 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\011", 0x1ea3},
#line 302 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\305\000\003\001", 0x03cd},
#line 130 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000j\000\003\002", 0x0135},
    {""}, {""},
#line 273 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\326\000\003\004", 0x022a},
#line 753 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\305\000\003\000", 0x1f7a},
#line 191 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000z\000\003\014", 0x017e},
    {""}, {""},
#line 248 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003\017", 0x0209},
#line 842 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\305\000\003B", 0x1fe6},
    {""}, {""}, {""},
#line 761 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\006\000\003E", 0x1f86},
#line 268 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000h\000\003\014", 0x021f},
#line 845 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\245\000\003\004", 0x1fe9},
    {""}, {""},
#line 34 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\003", 0x00c3},
#line 233 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\305\000\003\001", 0x01fa},
#line 635 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\260\000\003\011", 0x1eed},
    {""}, {""},
#line 528 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000v\000\003\003", 0x1e7d},
#line 301 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\277\000\003\001", 0x03cc},
#line 562 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\302\000\003\001", 0x1ea4},
    {""}, {""},
#line 274 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\366\000\003\004", 0x022b},
#line 752 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\277\000\003\000", 0x1f78},
#line 564 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\302\000\003\000", 0x1ea6},
    {""}, {""},
#line 760 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\005\000\003E", 0x1f85},
#line 296 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\267\000\003\001", 0x03ae},
#line 313 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\030\000\003\006", 0x0419},
    {""}, {""},
#line 86 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\006", 0x0102},
#line 750 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\267\000\003\000", 0x1f74},
#line 495 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\036Z\000\003\004", 0x1e5c},
    {""}, {""},
#line 276 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\365\000\003\004", 0x022d},
#line 818 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\267\000\003B", 0x1fc6},
#line 97 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000c\000\003\014", 0x010d},
    {""}, {""},
#line 768 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\015\000\003E", 0x1f8d},
#line 908 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000Y\0000\231", 0x305a},
#line 308 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\023\000\003\001", 0x0403},
    {""}, {""},
#line 88 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003(", 0x0104},
#line 876 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000>\000\0038", 0x226f},
    {""}, {""}, {""},
#line 450 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\357\000\003\001", 0x1e2f},
#line 113 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000g\000\003\006", 0x011f},
    {""}, {""},
#line 861 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000!\324\000\0038", 0x21ce},
#line 587 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003\003", 0x1ebd},
#line 282 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000y\000\003\004", 0x0233},
#line 728 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\245\000\003\024", 0x1f59},
    {""}, {""},
#line 77 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\010", 0x00f6},
#line 265 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000T\000\003&", 0x021a},
#line 634 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\257\000\003\011", 0x1eec},
    {""}, {""},
#line 85 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\004", 0x0101},
#line 824 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\277\000\003\001", 0x1fce},
#line 797 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037j\000\003E", 0x1faa},
    {""}, {""},
#line 599 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003\011", 0x1ec9},
#line 823 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\277\000\003\000", 0x1fcd},
#line 725 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037Q\000\003\001", 0x1f55},
    {""}, {""},
#line 103 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003\006", 0x0115},
#line 825 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\277\000\003B", 0x1fcf},
#line 723 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037Q\000\003\000", 0x1f53},
    {""}, {""},
#line 197 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003\014", 0x01ce},
#line 434 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000f\000\003\007", 0x1e1f},
#line 727 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037Q\000\003B", 0x1f57},
    {""}, {""},
#line 774 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037#\000\003E", 0x1f93},
#line 816 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\267\000\003E", 0x1fc3},
#line 732 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\311\000\003\023", 0x1f60},
    {""}, {""},
#line 107 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003(", 0x0119},
#line 347 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004M\000\003\010", 0x04ed},
    {""}, {""}, {""},
#line 247 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003\017", 0x0208},
#line 915 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000h\0000\231", 0x3069},
    {""}, {""}, {""},
#line 926 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000F\0000\231", 0x3094},
#line 826 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\271\000\003\006", 0x1fd0},
#line 551 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Z\000\0031", 0x1e94},
    {""}, {""},
#line 81 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\010", 0x00fc},
#line 267 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000H\000\003\014", 0x021e},
#line 456 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000k\000\0031", 0x1e35},
    {""}, {""},
#line 39 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003\001", 0x00c9},
#line 245 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003\021", 0x0206},
#line 525 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001j\000\003\010", 0x1e7a},
    {""}, {""},
#line 38 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003\000", 0x00c8},
#line 134 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000l\000\003\001", 0x013a},
#line 98 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000D\000\003\014", 0x010e},
    {""}, {""},
#line 275 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\325\000\003\004", 0x022c},
#line 740 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\251\000\003\023", 0x1f68},
#line 777 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037&\000\003E", 0x1f96},
    {""}, {""},
#line 40 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003\002", 0x00ca},
#line 387 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\015\331\000\015\312", 0x0dda},
#line 552 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000z\000\0031", 0x1e95},
    {""}, {""},
#line 104 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003\007", 0x0116},
#line 429 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\0030", 0x1e1a},
#line 922 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000x\0000\231", 0x3079},
    {""}, {""},
#line 427 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003-", 0x1e18},
#line 553 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000h\000\0031", 0x1e96},
#line 356 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004+\000\003\010", 0x04f8},
    {""}, {""},
#line 215 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\002'\000\003\004", 0x01e1},
#line 464 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000l\000\003-", 0x1e3d},
#line 680 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037 \000\003\001", 0x1f24},
    {""}, {""},
#line 123 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003\004", 0x012b},
#line 155 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000R\000\003\014", 0x0158},
#line 678 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037 \000\003\000", 0x1f22},
#line 383 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\014\312\000\014\325", 0x0ccb},
    {""},
#line 295 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\265\000\003\001", 0x03ad},
#line 793 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037f\000\003E", 0x1fa6},
#line 682 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037 \000\003B", 0x1f26},
    {""}, {""},
#line 749 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\265\000\003\000", 0x1f72},
#line 300 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\305\000\003\010", 0x03cb},
#line 613 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\364\000\003\003", 0x1ed7},
    {""}, {""},
#line 199 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003\014", 0x01d0},
#line 287 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\231\000\003\001", 0x038a},
#line 404 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003%", 0x1e01},
    {""}, {""},
#line 598 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003\011", 0x1ec8},
#line 833 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\231\000\003\000", 0x1fda},
#line 835 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\376\000\003\001", 0x1fde},
    {""}, {""},
#line 912 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000a\0000\231", 0x3062},
#line 435 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000G\000\003\004", 0x1e20},
#line 834 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\376\000\003\000", 0x1fdd},
    {""}, {""},
#line 48 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\001", 0x00d3},
#line 253 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\021", 0x020e},
#line 836 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\376\000\003B", 0x1fdf},
#line 862 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000!\322\000\0038", 0x21cf},
    {""},
#line 47 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\000", 0x00d2},
#line 271 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003'", 0x0228},
#line 610 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\324\000\003\011", 0x1ed4},
    {""}, {""},
#line 76 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\003", 0x00f5},
#line 218 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000G\000\003\014", 0x01e6},
#line 136 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000l\000\003'", 0x013c},
    {""}, {""},
#line 49 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\002", 0x00d4},
#line 144 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000n\000\003\014", 0x0148},
#line 684 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\227\000\003\023", 0x1f28},
    {""}, {""},
#line 277 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\007", 0x022e},
#line 284 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\221\000\003\001", 0x0386},
#line 372 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\013G\000\013>", 0x0b4b},
    {""}, {""},
#line 349 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004C\000\003\004", 0x04ef},
#line 812 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\221\000\003\000", 0x1fba},
#line 771 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037 \000\003E", 0x1f90},
    {""}, {""},
#line 148 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\006", 0x014f},
#line 799 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037l\000\003E", 0x1fac},
#line 625 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\241\000\003#", 0x1ee3},
    {""}, {""},
#line 328 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\020\000\003\010", 0x04d2},
#line 767 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\014\000\003E", 0x1f8c},
#line 569 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\342\000\003\003", 0x1eab},
    {""}, {""},
#line 236 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\346\000\003\001", 0x01fd},
#line 343 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004>\000\003\010", 0x04e7},
    {""}, {""}, {""},
#line 223 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003(", 0x01eb},
#line 803 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\261\000\003\006", 0x1fb0},
    {""}, {""}, {""},
#line 947 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\325\0000\231", 0x30d6},
#line 158 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000s\000\003\001", 0x015b},
#line 733 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\311\000\003\024", 0x1f61},
    {""}, {""},
#line 170 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\003", 0x0169},
#line 776 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037%\000\003E", 0x1f95},
#line 593 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\352\000\003\011", 0x1ec3},
    {""}, {""},
#line 239 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\017", 0x0200},
#line 642 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Y\000\003#", 0x1ef4},
    {""}, {""}, {""},
#line 122 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003\004", 0x012a},
#line 160 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000s\000\003\002", 0x015d},
    {""}, {""}, {""},
#line 306 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\025\000\003\000", 0x0400},
#line 500 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000s\000\003\007", 0x1e61},
#line 417 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000D\000\0031", 0x1e0e},
    {""}, {""},
#line 174 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\006", 0x016d},
#line 157 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000S\000\003\001", 0x015a},
#line 923 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000x\0000\232", 0x307a},
    {""}, {""},
#line 198 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003\014", 0x01cf},
#line 813 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\221\000\003E", 0x1fbc},
#line 549 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000Z\000\003#", 0x1e92},
    {""}, {""},
#line 449 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\317\000\003\001", 0x1e2e},
#line 741 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\251\000\003\024", 0x1f69},
#line 454 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000k\000\003#", 0x1e33},
    {""}, {""},
#line 180 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003(", 0x0173},
#line 159 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000S\000\003\002", 0x015c},
    {""}, {""}, {""},
#line 504 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001[\000\003\007", 0x1e65},
#line 499 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000S\000\003\007", 0x1e60},
#line 930 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\257\0000\231", 0x30b0},
    {""}, {""},
#line 41 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003\010", 0x00cb},
#line 497 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000R\000\0031", 0x1e5e},
#line 224 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\352\000\003\004", 0x01ec},
    {""}, {""},
#line 244 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003\017", 0x0205},
#line 99 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000d\000\003\014", 0x010f},
#line 550 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000z\000\003#", 0x1e93},
    {""}, {""},
#line 53 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\001", 0x00da},
#line 261 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\021", 0x0216},
#line 624 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\240\000\003#", 0x1ee2},
    {""}, {""},
#line 52 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\000", 0x00d9},
#line 440 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000h\000\003#", 0x1e25},
#line 339 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0048\000\003\004", 0x04e3},
    {""}, {""},
#line 237 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\330\000\003\001", 0x01fe},
#line 451 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000K\000\003\001", 0x1e30},
#line 162 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000s\000\003'", 0x015f},
    {""}, {""},
#line 54 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\002", 0x00db},
#line 837 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\305\000\003\006", 0x1fe0},
    {""}, {""}, {""},
#line 560 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\011", 0x1ea2},
#line 519 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\0030", 0x1e74},
#line 568 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\302\000\003\003", 0x1eaa},
    {""}, {""},
#line 521 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003-", 0x1e76},
#line 175 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\012", 0x016e},
#line 969 "gnulib/lib/uninorm/composition-table.gperf"
    {"\001\025\270\001\025\257", 0x115ba},
    {""}, {""},
#line 510 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000t\000\003\007", 0x1e6b},
#line 280 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\002/\000\003\004", 0x0231},
    {""}, {""}, {""},
#line 516 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000t\000\003-", 0x1e71},
#line 476 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000n\000\0031", 0x1e49},
#line 161 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000S\000\003'", 0x015e},
    {""}, {""},
#line 775 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037$\000\003E", 0x1f94},
#line 292 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\231\000\003\010", 0x03aa},
    {""}, {""}, {""},
#line 256 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000r\000\003\017", 0x0211},
#line 143 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000N\000\003\014", 0x0147},
#line 685 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\227\000\003\024", 0x1f29},
    {""}, {""},
#line 309 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\006\000\003\010", 0x0407},
#line 907 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000W\0000\231", 0x3058},
    {""}, {""}, {""},
#line 51 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\010", 0x00d6},
#line 388 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\015\331\000\015\317", 0x0ddc},
#line 389 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\015\334\000\015\312", 0x0ddd},
    {""}, {""},
#line 948 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\325\0000\232", 0x30d7},
#line 386 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\015F\000\015W", 0x0d4c},
#line 204 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\334\000\003\004", 0x01d5},
    {""}, {""},
#line 585 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003\011", 0x1ebb},
#line 784 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037-\000\003E", 0x1f9d},
    {""}, {""}, {""},
#line 326 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\020\000\003\006", 0x04d0},
#line 643 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000y\000\003#", 0x1ef5},
    {""}, {""},
#line 965 "gnulib/lib/uninorm/composition-table.gperf"
    {"\001\023G\001\023W", 0x1134c},
#line 329 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0040\000\003\010", 0x04d3},
#line 692 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\271\000\003\023", 0x1f30},
#line 208 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\334\000\003\014", 0x01d9},
    {""}, {""},
#line 559 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000a\000\003#", 0x1ea1},
#line 166 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000t\000\003'", 0x0163},
#line 131 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000K\000\003'", 0x0136},
    {""}, {""},
#line 216 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\306\000\003\004", 0x01e2},
#line 913 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000d\0000\231", 0x3065},
    {""}, {""}, {""},
#line 773 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037\"\000\003E", 0x1f92},
#line 334 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\026\000\003\010", 0x04dc},
#line 338 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\030\000\003\004", 0x04e2},
    {""}, {""},
#line 84 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\004", 0x0100},
#line 366 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\011(\000\011<", 0x0929},
    {""}, {""}, {""},
#line 815 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\037t\000\003E", 0x1fc2},
#line 353 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004C\000\003\013", 0x04f3},
#line 639 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\260\000\003#", 0x1ef1},
    {""}, {""},
#line 840 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\301\000\003\023", 0x1fe4},
#line 439 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000H\000\003#", 0x1e24},
    {""}, {""}, {""},
#line 196 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003\014", 0x01cd},
#line 337 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0047\000\003\010", 0x04df},
#line 376 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\013\307\000\013\276", 0x0bcb},
    {""}, {""},
#line 586 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003\003", 0x1ebc},
#line 436 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000g\000\003\004", 0x1e21},
#line 415 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000D\000\003#", 0x1e0c},
    {""}, {""},
#line 307 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\025\000\003\010", 0x0401},
#line 390 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\015\331\000\015\337", 0x0dde},
#line 858 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000!\222\000\0038", 0x219b},
    {""}, {""},
#line 252 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\017", 0x020d},
#line 418 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000d\000\0031", 0x1e0f},
    {""}, {""}, {""},
#line 350 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004#\000\003\010", 0x04f0},
#line 219 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000g\000\003\014", 0x01e7},
#line 410 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000b\000\0031", 0x1e07},
    {""}, {""},
#line 102 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003\006", 0x0114},
#line 527 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000V\000\003\003", 0x1e7c},
#line 714 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\237\000\003\023", 0x1f48},
    {""}, {""},
#line 101 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003\004", 0x0113},
#line 968 "gnulib/lib/uninorm/composition-table.gperf"
    {"\001\024\271\001\024\275", 0x114be},
    {""}, {""}, {""},
#line 872 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000=\000\0038", 0x2260},
#line 493 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000R\000\003#", 0x1e5a},
    {""}, {""}, {""},
#line 106 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003(", 0x0118},
#line 902 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000M\0000\231", 0x304e},
#line 638 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\257\000\003#", 0x1ef0},
    {""}, {""},
#line 109 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003\014", 0x011b},
#line 315 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0045\000\003\000", 0x0450},
#line 378 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\014F\000\014V", 0x0c48},
    {""}, {""},
#line 601 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000i\000\003#", 0x1ecb},
#line 395 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\033\013\000\0335", 0x1b0c},
    {""}, {""}, {""},
#line 55 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\010", 0x00dc},
#line 827 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\271\000\003\004", 0x1fd1},
#line 611 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\364\000\003\011", 0x1ed5},
    {""}, {""},
#line 260 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\017", 0x0215},
    {""}, {""}, {""}, {""},
#line 554 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000t\000\003\010", 0x1e97},
#line 475 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000N\000\0031", 0x1e48},
#line 375 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\013\306\000\013\276", 0x0bca},
    {""}, {""},
#line 50 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\003", 0x00d5},
#line 264 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000s\000\003&", 0x0219},
#line 670 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\225\000\003\023", 0x1f18},
    {""}, {""},
#line 932 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\263\0000\231", 0x30b4},
#line 831 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\231\000\003\006", 0x1fd8},
    {""}, {""}, {""},
#line 941 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\306\0000\231", 0x30c7},
#line 474 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000n\000\003#", 0x1e47},
#line 403 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003%", 0x1e00},
#line 963 "gnulib/lib/uninorm/composition-table.gperf"
    {"\001\0212\001\021'", 0x1112f},
    {""},
#line 605 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\011", 0x1ecf},
#line 648 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\261\000\003\023", 0x1f00},
#line 961 "gnulib/lib/uninorm/composition-table.gperf"
    {"\001\020\245\001\020\272", 0x110ab},
    {""}, {""},
#line 147 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\006", 0x014e},
#line 945 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\322\0000\231", 0x30d3},
    {""}, {""}, {""},
#line 156 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000r\000\003\014", 0x0159},
#line 263 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000S\000\003&", 0x0218},
    {""}, {""}, {""},
#line 335 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0046\000\003\010", 0x04dd},
#line 167 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000T\000\003\014", 0x0164},
#line 205 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\374\000\003\004", 0x01d6},
    {""}, {""},
#line 222 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003(", 0x01ea},
#line 693 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\271\000\003\024", 0x1f31},
    {""}, {""}, {""},
#line 327 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0040\000\003\006", 0x04d1},
#line 810 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\221\000\003\006", 0x1fb8},
#line 567 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\342\000\003\011", 0x1ea9},
    {""}, {""},
#line 869 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"C\000\0038", 0x2244},
    {""},
#line 209 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\374\000\003\014", 0x01da},
    {""}, {""},
#line 863 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\003\000\0038", 0x2204},
    {""}, {""}, {""}, {""},
#line 864 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\010\000\0038", 0x2209},
#line 324 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\026\000\003\006", 0x04c1},
    {""}, {""}, {""},
#line 629 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\011", 0x1ee7},
#line 865 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\013\000\0038", 0x220c},
    {""}, {""}, {""},
#line 841 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\301\000\003\024", 0x1fe5},
#line 539 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000W\000\003#", 0x1e88},
    {""}, {""}, {""},
#line 266 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000t\000\003&", 0x021b},
#line 369 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\011\307\000\011\276", 0x09cb},
    {""}, {""}, {""},
#line 600 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000I\000\003#", 0x1eca},
#line 381 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\014\306\000\014\326", 0x0cc8},
    {""}, {""}, {""},
#line 212 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\304\000\003\004", 0x01de},
#line 382 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\014\306\000\014\302", 0x0cca},
#line 883 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"z\000\0038", 0x2280},
    {""}, {""},
#line 330 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\025\000\003\006", 0x04d6},
#line 318 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004V\000\003\010", 0x0457},
    {""}, {""}, {""},
#line 146 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\004", 0x014d},
#line 137 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000L\000\003\014", 0x013d},
    {""}, {""}, {""},
#line 312 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004#\000\003\006", 0x040e},
#line 720 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\305\000\003\023", 0x1f50},
#line 715 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\237\000\003\024", 0x1f49},
    {""}, {""},
#line 893 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"|\000\0038", 0x22e0},
#line 416 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000d\000\003#", 0x1e0d},
    {""}, {""}, {""},
#line 201 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\014", 0x01d2},
#line 804 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\261\000\003\004", 0x1fb1},
#line 408 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000b\000\003#", 0x1e05},
    {""}, {""},
#line 169 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\003", 0x0168},
#line 935 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\271\0000\231", 0x30ba},
    {""}, {""}, {""},
#line 918 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000r\0000\231", 0x3073},
#line 380 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\014\306\000\014\325", 0x0cc7},
    {""}, {""}, {""},
#line 394 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\033\011\000\0335", 0x1b0a},
#line 708 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\277\000\003\023", 0x1f40},
    {""}, {""}, {""},
#line 227 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\002\222\000\003\014", 0x01ef},
    {""}, {""}, {""}, {""},
#line 173 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\006", 0x016c},
#line 676 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\267\000\003\023", 0x1f20},
    {""}, {""}, {""},
#line 172 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\004", 0x016b},
#line 316 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0045\000\003\010", 0x0451},
#line 566 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\302\000\003\011", 0x1ea8},
    {""}, {""},
#line 939 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\301\0000\231", 0x30c2},
#line 946 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\322\0000\232", 0x30d4},
#line 671 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\225\000\003\024", 0x1f19},
    {""}, {""},
#line 179 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003(", 0x0172},
    {""}, {""}, {""}, {""},
#line 203 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\014", 0x01d4},
#line 473 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000N\000\003#", 0x1e46},
    {""}, {""}, {""},
#line 498 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000r\000\0031", 0x1e5f},
#line 649 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\261\000\003\024", 0x1f01},
    {""}, {""}, {""},
#line 243 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003\017", 0x0204},
#line 513 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000T\000\0031", 0x1e6e},
    {""}, {""}, {""},
#line 873 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"a\000\0038", 0x2262},
#line 469 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000M\000\003#", 0x1e42},
    {""}, {""}, {""},
#line 951 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\333\0000\231", 0x30dc},
    {""}, {""}, {""}, {""},
#line 325 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0046\000\003\006", 0x04c2},
    {""}, {""}, {""}, {""},
#line 960 "gnulib/lib/uninorm/composition-table.gperf"
    {"\001\020\233\001\020\272", 0x1109c},
    {""}, {""}, {""}, {""},
#line 940 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\304\0000\231", 0x30c5},
#line 838 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\305\000\003\004", 0x1fe1},
#line 228 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000j\000\003\014", 0x01f0},
    {""}, {""},
#line 399 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\033<\000\0335", 0x1b3d},
#line 871 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"H\000\0038", 0x2249},
#line 214 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\002&\000\003\004", 0x01e0},
    {""}, {""},
#line 916 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000o\0000\231", 0x3070},
    {""}, {""}, {""}, {""},
#line 409 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000B\000\0031", 0x1e06},
#line 358 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\006'\000\006S", 0x0622},
    {""},
#line 970 "gnulib/lib/uninorm/composition-table.gperf"
    {"\001\025\271\001\025\257", 0x115bb},
    {""},
#line 384 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\015F\000\015>", 0x0d4a},
#line 540 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000w\000\003#", 0x1e89},
#line 470 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000m\000\003#", 0x1e43},
    {""}, {""},
#line 936 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\273\0000\231", 0x30bc},
    {""}, {""}, {""}, {""},
#line 558 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000A\000\003#", 0x1ea0},
#line 346 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004-\000\003\010", 0x04ec},
    {""},
#line 964 "gnulib/lib/uninorm/composition-table.gperf"
    {"\001\023G\001\023>", 0x1134b},
    {""},
#line 530 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000v\000\003#", 0x1e7f},
#line 461 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000L\000\0031", 0x1e3a},
    {""}, {""}, {""},
#line 251 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\017", 0x020c},
#line 226 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\267\000\003\014", 0x01ee},
    {""}, {""}, {""},
#line 584 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003\011", 0x1eba},
#line 931 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\261\0000\231", 0x30b2},
    {""}, {""}, {""},
#line 919 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000r\0000\232", 0x3074},
#line 721 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\305\000\003\024", 0x1f51},
    {""}, {""}, {""},
#line 920 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000u\0000\231", 0x3076},
#line 368 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0113\000\011<", 0x0934},
    {""}, {""}, {""},
#line 323 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004u\000\003\017", 0x0477},
#line 460 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0367\000\003\004", 0x1e39},
    {""}, {""}, {""},
#line 332 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004\330\000\003\010", 0x04da},
#line 357 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004K\000\003\010", 0x04f9},
    {""}, {""}, {""},
#line 664 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\265\000\003\023", 0x1f10},
#line 377 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\013\306\000\013\327", 0x0bcc},
    {""}, {""}, {""},
#line 583 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000e\000\003#", 0x1eb9},
#line 709 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\277\000\003\024", 0x1f41},
    {""}, {""}, {""},
#line 393 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\033\007\000\0335", 0x1b08},
#line 700 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\231\000\003\023", 0x1f38},
    {""}, {""}, {""},
#line 868 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"<\000\0038", 0x2241},
#line 677 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\267\000\003\024", 0x1f21},
    {""}, {""}, {""},
#line 928 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\253\0000\231", 0x30ac},
#line 150 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\013", 0x0151},
    {""}, {""}, {""},
#line 924 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000{\0000\231", 0x307c},
#line 331 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0045\000\003\006", 0x04d7},
    {""}, {""}, {""},
#line 398 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\033:\000\0335", 0x1b3b},
    {""}, {""}, {""}, {""},
#line 952 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\333\0000\232", 0x30dd},
    {""}, {""}, {""}, {""},
#line 604 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\011", 0x1ece},
    {""}, {""}, {""}, {""},
#line 958 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\375\0000\231", 0x30fe},
#line 656 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\221\000\003\023", 0x1f08},
    {""}, {""}, {""},
#line 100 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003\004", 0x0112},
    {""}, {""}, {""}, {""},
#line 494 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000r\000\003#", 0x1e5b},
    {""}, {""}, {""}, {""},
#line 917 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000o\0000\232", 0x3071},
#line 511 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000T\000\003#", 0x1e6c},
#line 397 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\033\021\000\0335", 0x1b12},
    {""}, {""},
#line 108 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003\014", 0x011a},
#line 178 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\013", 0x0171},
    {""}, {""}, {""},
#line 957 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\362\0000\231", 0x30fa},
#line 138 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000l\000\003\014", 0x013e},
    {""}, {""}, {""},
#line 370 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\011\307\000\011\327", 0x09cc},
#line 891 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\251\000\0038", 0x22ae},
    {""}, {""}, {""},
#line 259 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\017", 0x0214},
#line 938 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\277\0000\231", 0x30c0},
    {""}, {""}, {""},
#line 956 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\361\0000\231", 0x30f9},
#line 518 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003$", 0x1e73},
#line 904 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000Q\0000\231", 0x3052},
    {""}, {""},
#line 459 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0366\000\003\004", 0x1e38},
#line 934 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\267\0000\231", 0x30b8},
    {""}, {""}, {""},
#line 954 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\357\0000\231", 0x30f7},
    {""}, {""}, {""}, {""},
#line 407 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000B\000\003#", 0x1e04},
#line 832 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\231\000\003\004", 0x1fd9},
    {""}, {""}, {""},
#line 921 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000u\0000\232", 0x3077},
#line 914 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000f\0000\231", 0x3067},
    {""}, {""}, {""},
#line 955 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\360\0000\231", 0x30f8},
#line 877 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"d\000\0038", 0x2270},
    {""}, {""}, {""},
#line 145 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\004", 0x014c},
    {""}, {""}, {""}, {""},
#line 225 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\001\353\000\003\004", 0x01ed},
#line 457 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000L\000\003#", 0x1e36},
    {""}, {""}, {""},
#line 193 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003\033", 0x01a1},
#line 385 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\015G\000\015>", 0x0d4b},
    {""}, {""}, {""},
#line 200 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\014", 0x01d1},
    {""}, {""}, {""}, {""},
#line 603 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000o\000\003#", 0x1ecd},
#line 811 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\221\000\003\004", 0x1fb9},
    {""}, {""}, {""},
#line 665 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\265\000\003\024", 0x1f11},
    {""}, {""}, {""}, {""},
#line 925 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000{\0000\232", 0x307d},
    {""}, {""}, {""}, {""},
#line 628 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\011", 0x1ee6},
#line 701 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\231\000\003\024", 0x1f39},
    {""}, {""}, {""},
#line 217 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\346\000\003\004", 0x01e3},
    {""}, {""}, {""}, {""},
#line 213 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000\344\000\003\004", 0x01df},
    {""}, {""}, {""}, {""},
#line 890 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\250\000\0038", 0x22ad},
    {""}, {""}, {""}, {""},
#line 195 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003\033", 0x01b0},
    {""}, {""}, {""}, {""},
#line 362 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\006J\000\006T", 0x0626},
#line 874 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"M\000\0038", 0x226d},
    {""}, {""}, {""},
#line 627 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000u\000\003#", 0x1ee5},
#line 164 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000s\000\003\014", 0x0161},
    {""}, {""}, {""},
#line 942 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\310\0000\231", 0x30c9},
#line 657 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\003\221\000\003\024", 0x1f09},
#line 379 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\014\277\000\014\325", 0x0cc0},
    {""}, {""},
#line 348 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004#\000\003\004", 0x04ee},
    {""}, {""}, {""}, {""},
#line 937 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\275\0000\231", 0x30be},
    {""}, {""}, {""}, {""},
#line 899 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\264\000\0038", 0x22ec},
#line 462 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000l\000\0031", 0x1e3b},
    {""}, {""}, {""},
#line 897 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\262\000\0038", 0x22ea},
#line 163 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000S\000\003\014", 0x0160},
    {""}, {""}, {""},
#line 898 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\263\000\0038", 0x22eb},
    {""}, {""}, {""}, {""},
#line 933 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\265\0000\231", 0x30b6},
#line 882 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"w\000\0038", 0x2279},
    {""}, {""}, {""},
#line 903 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000O\0000\231", 0x3050},
#line 400 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\033>\000\0335", 0x1b40},
    {""}, {""}, {""},
#line 171 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\004", 0x016a},
    {""}, {""}, {""}, {""},
#line 881 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"v\000\0038", 0x2278},
    {""}, {""}, {""}, {""},
#line 929 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\255\0000\231", 0x30ae},
    {""}, {""}, {""}, {""},
#line 202 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\014", 0x01d3},
#line 374 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\013\222\000\013\327", 0x0b94},
    {""}, {""}, {""},
#line 953 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\246\0000\231", 0x30f4},
    {""}, {""}, {""}, {""},
#line 168 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000t\000\003\014", 0x0165},
#line 220 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000K\000\003\014", 0x01e8},
    {""}, {""}, {""},
#line 367 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\0110\000\011<", 0x0931},
#line 361 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\006'\000\006U", 0x0625},
    {""}, {""}, {""},
#line 889 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\242\000\0038", 0x22ac},
#line 966 "gnulib/lib/uninorm/composition-table.gperf"
    {"\001\024\271\001\024\272", 0x114bb},
    {""}, {""}, {""},
#line 927 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\235\0000\231", 0x309e},
    {""}, {""}, {""}, {""},
#line 878 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"e\000\0038", 0x2271},
    {""}, {""}, {""}, {""},
#line 888 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\207\000\0038", 0x2289},
    {""}, {""}, {""}, {""},
#line 887 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\206\000\0038", 0x2288},
    {""},
#line 967 "gnulib/lib/uninorm/composition-table.gperf"
    {"\001\024\271\001\024\260", 0x114bc},
    {""}, {""},
#line 402 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\033B\000\0335", 0x1b43},
    {""}, {""}, {""}, {""},
#line 886 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\203\000\0038", 0x2285},
    {""}, {""}, {""}, {""},
#line 496 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\036[\000\003\004", 0x1e5d},
#line 905 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000S\0000\231", 0x3054},
    {""}, {""}, {""},
#line 885 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\202\000\0038", 0x2284},
#line 149 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\013", 0x0150},
    {""}, {""}, {""},
#line 943 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\317\0000\231", 0x30d0},
    {""}, {""}, {""}, {""},
#line 894 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"}\000\0038", 0x22e1},
    {""}, {""}, {""}, {""},
#line 911 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000_\0000\231", 0x3060},
    {""},
#line 391 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\020%\000\020.", 0x1026},
    {""}, {""},
#line 879 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"r\000\0038", 0x2274},
    {""}, {""}, {""}, {""},
#line 909 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000[\0000\231", 0x305c},
#line 360 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\006H\000\006T", 0x0624},
    {""}, {""}, {""},
#line 906 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000U\0000\231", 0x3056},
    {""}, {""}, {""}, {""},
#line 910 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000]\0000\231", 0x305e},
    {""}, {""}, {""}, {""},
#line 949 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\330\0000\231", 0x30d9},
#line 901 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000K\0000\231", 0x304c},
    {""}, {""}, {""},
#line 322 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004t\000\003\017", 0x0476},
    {""}, {""}, {""}, {""},
#line 582 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000E\000\003#", 0x1eb8},
    {""}, {""}, {""}, {""},
#line 363 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\006\325\000\006T", 0x06c0},
#line 458 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000l\000\003#", 0x1e37},
    {""}, {""}, {""},
#line 392 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\033\005\000\0335", 0x1b06},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 529 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000V\000\003#", 0x1e7e},
    {""}, {""}, {""},
#line 396 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\033\015\000\0335", 0x1b0e},
#line 352 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\004#\000\003\013", 0x04f2},
    {""}, {""}, {""},
#line 514 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000t\000\0031", 0x1e6f},
#line 455 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000K\000\0031", 0x1e34},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""},
#line 401 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\033?\000\0335", 0x1b41},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 192 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003\033", 0x01a0},
    {""}, {""}, {""}, {""},
#line 359 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\006'\000\006T", 0x0623},
#line 177 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\013", 0x0170},
    {""}, {""}, {""},
#line 602 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000O\000\003#", 0x1ecc},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 944 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\317\0000\232", 0x30d1},
    {""}, {""}, {""}, {""}, {""},
#line 517 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003$", 0x1e72},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
#line 896 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\222\000\0038", 0x22e3},
    {""}, {""}, {""}, {""},
#line 950 "gnulib/lib/uninorm/composition-table.gperf"
    {"\0000\330\0000\232", 0x30da},
    {""}, {""}, {""}, {""}, {""},
#line 502 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000s\000\003#", 0x1e63},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""},
#line 892 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\253\000\0038", 0x22af},
    {""}, {""}, {""}, {""},
#line 884 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"{\000\0038", 0x2281},
    {""}, {""}, {""}, {""}, {""},
#line 501 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000S\000\003#", 0x1e62},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 866 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"#\000\0038", 0x2224},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
#line 194 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003\033", 0x01af},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 626 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000U\000\003#", 0x1ee4},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 512 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000t\000\003#", 0x1e6d},
#line 453 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\000K\000\003#", 0x1e32},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 959 "gnulib/lib/uninorm/composition-table.gperf"
    {"\001\020\231\001\020\272", 0x1109a},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 870 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"E\000\0038", 0x2247},
#line 365 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\006\322\000\006T", 0x06d3},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 867 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"%\000\0038", 0x2226},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 900 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\265\000\0038", 0x22ed},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 895 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"\221\000\0038", 0x22e2},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 880 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\"s\000\0038", 0x2275},
    {""}, {""}, {""},
#line 364 "gnulib/lib/uninorm/composition-table.gperf"
    {"\000\006\301\000\006T", 0x06c2}
  };

const struct composition_rule *
gl_uninorm_compose_lookup (register const char *str, register size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = gl_uninorm_compose_hash (str, len);

      if (key <= MAX_HASH_VALUE)
        if (len == lengthtable[key])
          {
            register const char *s = wordlist[key].codes;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &wordlist[key];
          }
    }
  return 0;
}
