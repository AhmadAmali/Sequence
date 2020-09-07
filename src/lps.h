// lps header file
#ifndef LPS_H
#define LPS_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#include "lcs.h"

int LPS(char sequence[], int length, int condition);
int LPSreturn(char sequence[], int length, int condition);
int LCPS(char sequence1[], char sequence2[], int length1, int length2);



#endif