// lcs header file
extern char seq2reverse[10001];
extern char seq2[10001];
extern char seq1[10001];
extern int len1;
extern int len2;
extern int len3;
extern int *a;
extern char *filename;


#ifndef LCS_H
#define LCS_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int LCS(char a1[], char a2[], int l1, int l2, int condition);
int maximum(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int check);
int lcpsOrlcts(char *s1, char *s2, char *s3, char *s4, int n1, int n2, int n3, int n4, int flag);


#endif