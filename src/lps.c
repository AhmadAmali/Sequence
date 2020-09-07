// lps source file
#include "lps.h"
#include "utility.h"

int LPS(char sequence[], int length, int condition)
{
char sequencecopy[length];
int endin, reversi;
strcpy(sequencecopy , sequence); // making a copy of sequence 2 to reverse it
endin = sizeof(sequencecopy) / sizeof(sequencecopy[0]); // getting the start and end paramters for the reverseArray method
reverseArray(sequencecopy, 0, endin - 1); //reversing the array
reversi = sizeof(sequencecopy);
if (condition == 0)
{
	LCS(sequence, sequencecopy , length, reversi, 3);// using the slightly modified LCS function in order to computer the LPS
}
else if (condition == 1)
{
	LCS(sequence, sequencecopy , length, reversi, 9);
}
printf("\n"); 
return 0;
}

int LPSreturn(char sequence[], int length, int condition)
{
char sequencecopy[length];
int endin, reversi;
strcpy(sequencecopy , sequence); // making a copy of sequence 2 to reverse it
endin = sizeof(sequencecopy) / sizeof(sequencecopy[0]); // getting the start and end paramters for the reverseArray method
reverseArray(sequencecopy, 0, endin - 1); //reversing the array
reversi = sizeof(sequencecopy);
int output;
int output1;
if (condition == 0)
{

	output1 = LCS(sequence, sequencecopy , length, reversi, 6);
	//for(int i = 0; i < 5; i++)
	//{
	//}
	printf("%d\n",output1);
	return output1;

}
else if (condition == 1)
{
	int v;
	v = LCS(sequence, sequencecopy , length, reversi, 3);
	return v;
}
else if (condition == 2)
{
	output = LCS(sequence, sequencecopy , length, reversi, 8);
	return output;
}
else
// using the slightly modified LCS function in order to computer the LPS
	printf("\n"); 
	return 0;
}



int LCPS(char sequence1[], char sequence2[], int length1, int length2)
{
	char a1;
	int a2;
	a1 = LCS(sequence1, sequence2, length1, length2, 3);
	a2 = LCS(sequence1, sequence2, length1, length2, 6);

	LPS(&a1, a2, 1);
	
}






