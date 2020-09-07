// lts source file
#include "lts.h"

int LTS(char sequence[], int length)
{
  int result;
  int maxLCS = 0;
  int temp = 0;
  for (int i = 1; i < length ; i++) // for loop that iterates through the sequence, splits it into two seperate arrays and computes the LCS
  {                                 // for both of them getting a Tandem sequence 
    char half1[i];
    char half2[length - i];
    strcpy(half1, &sequence[0]);
    strcpy(half2, &sequence[i]);
    result = LCS(half1 , half2, i, length-i, 6);
    if (result > maxLCS) //check condition to store the highest i values and result values to get the right values to get the Longest Tandem Subsequence
    {
      maxLCS = result;
      temp = i;
    }
  }
    char half1[temp]; // printing the LTS using the same previous method but with the different condition in the LCStoLTS function which enables it to print the length and value of the LTS only once 
    char half2[length - temp];
    strcpy(half1, &sequence[0]);
    strcpy(half2, &sequence[temp]);
    result = LCS(half1 , half2, temp, length-temp, 2);
  return result;
}


int LTSreturn(char sequence[], int length, int flag)
{
  int result;
  int maxLCS = 0;
  int temp = 0;
  for (int i = 1; i < length ; i++) // for loop that iterates through the sequence, splits it into two seperate arrays and computes the LCS
  {                                 // for both of them getting a Tandem sequence 
    char half1[i];
    char half2[length - i];
    strcpy(half1, &sequence[0]);
    strcpy(half2, &sequence[i]);
    result = LCS(half1 , half2, i, length-i, 6);
    if (result > maxLCS) //check condition to store the highest i values and result values to get the right values to get the Longest Tandem Subsequence
    {
      maxLCS = result;
      temp = i;
    }
  }
    char half1[temp]; // printing the LTS using the same previous method but with the different condition in the LCStoLTS function which enables it to print the length and value of the LTS only once 
    char half2[length - temp];
    strcpy(half1, &sequence[0]);
    strcpy(half2, &sequence[temp]);

  if (flag == 1)
  {
    result = LCS(half1, half2, temp,length-temp, 7);
    return result;
  }
  else
    return result;
}