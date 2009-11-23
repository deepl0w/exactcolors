#ifndef __COLOR_H
#define __COLOR_H

#include "color_defs.h"

typedef struct COLORset {
    int count;
    int *members;
    struct COLORset *next;
} COLORset;

int COLORdbg_lvl(void);

int COLORgreedy (int ncount, int ecount, int *elist, int *ncolors,
        COLORset **colorclasses);

void *COLORutil_allocrus (size_t size);
void COLORutil_freerus (void *p);
void COLORinit_set (COLORset *s);
void COLORfree_set (COLORset *s);
void COLORfree_sets (COLORset **s,int* nsets);
int  COLORcheck_set(COLORset* set, int ncount, int ecount, const int elist[]);



#endif  /* __COLOR_H */
