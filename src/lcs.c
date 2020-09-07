// lcs source file 
#include "lcs.h"


char seq2reverse[10001];
char seq2[10001];
char seq1[10001];




int LCS(char a1[], char a2[], int l1, int l2, int condition)
{
  int lcs0[l1+2][l2+2];
  char lcs1[l1+2][l2+2]; 
  
  lcs0[0][0] = 0; 
  for(int i = 0; i < l1+2; i++) 
  {
    lcs0[i][1] = 0;
    if(i > 1)
    {
      lcs0[i][0] = a1[i-2];
    }
  }
  for(int j = 0; j < l2+2; j++) 
  {
    lcs0[1][j] = 0;
    if(j > 1)
    {
      lcs0[0][j] = a2[j-2];
    }
  }
  for(int i = 2; i < l1+2; i++) 
    for(int j = 2; j < l2+2; j++) 
    {
      if(lcs0[i][0] == lcs0[0][j])
      {
        lcs0[i][j] = 1 + lcs0[i-1][j-1]; 
        lcs1[i][j] = 'd';
      }
      else
      {
        if(lcs0[i][j-1] > lcs0[i-1][j])
        {
          lcs0[i][j] = lcs0[i][j-1];
          lcs1[i][j] = 'l';
        }
        else
        {
          lcs0[i][j] = lcs0[i-1][j];
          lcs1[i][j] = 'u'; 
      }
    }
  }
  int flen = lcs0[l1+1][l2+1];
  int final[flen]; 
  int element1 = l1+1; 
  int element2 = l2+1; 
  while(flen != 0)
  {
    if(lcs1[element1][element2] == 'd')
    {
      final[flen - 1] = lcs0[element1][0];
      flen = flen - 1;
      element1 -= 1;
      element2 -= 1;
    }
    else if(lcs1[element1][element2] == 'l')
    {
      element2 -= 1;
    }
    else if(lcs1[element1][element2] == 'u')
    {
      element1 -= 1;
    }
  }

    if (condition == 1)
  
  {
     printf("# an LCS (length = %d) is:\n", lcs0[l1+1][l2+1]);
       for(int i = 0; i < lcs0[l1+1][l2+1]; i++)
    {
      printf("%c", final[i]);
    } 
    printf("\n");
  }
  else if (condition == 2)
  {
    printf("# an LTS (length = %d) is:\n", 2*lcs0[l1+1][l2+1]);

    for(int i = 0; i < lcs0[l1+1][l2+1]; i++)
  {
    printf("%c", final[i]);
  }
  for(int i = 0; i < lcs0[l1+1][l2+1]; i++)
  {
    printf("%c", final[i]);
  }
  printf("\n");
  }
  else if (condition == 3)
  {
    printf("# an LPS (length = %d) is:\n", lcs0[l1+1][l2+1]);
      for(int i = 0; i < lcs0[l1+1][l2+1]; i++)
    {
      printf("%c", final[i]);
    }
    printf("\n");
    return final;
  }
  else if (condition == 4)
  {
    printf("# an LTCS (length = %d) is:\n", flen);
  }
  else if (condition == 5)
  {
    return final;

  }
  else if (condition == 6)
  {
    return lcs0[l1+1][l2+1];
  }
  else if (condition == 7)
  {
    FILE *myFile2 = fopen(filename, "w");

    for (int i = 0; i < lcs0[l1+1][l2+1]; i++)
    {
      fprintf(myFile2, "%c",final[i]);
    }
    for (int i = 0; i < lcs0[l1+1][l2+1]; i++)
    {
      fprintf(myFile2, "%c",final[i]);
    }
  }
  else if (condition == 8)
  {
    FILE *myFile2 = fopen(filename, "w");

    for (int i = 0; i < lcs0[l1+1][l2+1]; i++)
    {
      fprintf(myFile2, "%c",final[i]);
    }
    fclose(myFile2);
  }
  else if (condition == 9)
  {
    printf("# an LCPS (length = %d) is: \n", lcs0[l1+1][l2+1]);
    for (int i = 0; i < lcs0[l1+1][l2+1]; i++)
    {
      printf("%d", final[i]);
    }
    return final;
  }  
  
 
  
  else
  return lcs0[l1+1][l2+1];
  printf("\n");
}




