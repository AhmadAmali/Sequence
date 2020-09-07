// utility header file
#ifndef UTILITY_H
#define UTILITY_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "lcs.h"


int reverseArray(char reversesequence[], int start, int end);
void inputValidation(char validatedSequence[] , char validatedSequence2[] ,int seqlenOne , int seqlenTwo);
void singleInput(char sequence[],int length);
int generateInstance(int desiredLen1);
char generateDoubleInstance(char fileName[]);
char* readInFile(char fileName[], int *length);
void readOutFile(char fileName[],int *sequence, int seqlen);


#endif