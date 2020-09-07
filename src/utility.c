// utility source file
#include "utility.h"

int num1 = 0;
int num2 = 0;
int len1 = 0;
int len2 = 0;
int len3 = 0;
int num3 = 0;



int reverseArray(char reversesequence[], int start, int end) // function to reverse a given array
{ 
    int temp; 
    while (start < end) 
    { 
        temp = reversesequence[start]; // simple while loop that uses indexes to switch the elements in an array    
        reversesequence[start] = reversesequence[end]; 
        reversesequence[end] = temp; 
        start++; 
        end--; 
    }
    return 0;    
}


void inputValidation(char validatedSequence[] , char validatedSequence2[] ,int seqlenOne , int seqlenTwo)
{
    while (num1 == 0) // input validation while loop which checks for multiple errors in input.
{
  int choice = 0, flag = 0;
  printf("Enter the first sequence: \nEnter the second sequence: \n");
  fgets(seq1, 10001, stdin); // getting the input using fgets to accomodate for newline inputs
  fgets(seq2, 10001, stdin);
  seqlenOne = strlen(validatedSequence);
  seqlenTwo = strlen(validatedSequence2);

  if (seqlenOne < 1 || seqlenOne > 10001) // to ensure that the digits entered are within the range of the Assignment
  {
    printf("Error detected!\n");
    continue; 
  }
  seqlenOne--;
  for (int i = 0; i < seqlenOne; ++i)
  {
    if(validatedSequence[i] < '0' || (validatedSequence[i]) > '9') // to ensure that the digits are between 0-9 a.k.a non-negative integers.
    {
      choice = 1;
      break; 
    }
  }

  if (choice)
  {
    printf("Error detected!\n");
    continue;
  }


  if (sscanf(validatedSequence, "%d", &num2) != 1) //same input validation methods for the second sequence as well
  {
    num2 = 0;
    printf("one of your inputted sequences are of (length = 0): \n"); // prints this message when a newline character is entered into the first sequence
    continue; 
  }

  if (seqlenTwo < 1 || seqlenTwo > 10001)
  {
    printf("Error detected!\n");
    continue; 
  }
  seqlenTwo--;
  for (int j = 0; j < seqlenTwo; ++j)
  {
    if(validatedSequence2[j] < '0' || (validatedSequence2[j]) > '9')
    {
      flag = 1;
      break; 
    }
  }

  if (flag)
  {
    printf("Error detected!\n");
    continue;
  }

  if (sscanf(validatedSequence2, "%d", &num2) != 1)
  {
    num2 = 0;
    printf("one of your inputted sequences are of (length = 0): \n"); // prints this message when a newline character is entered into the second sequence 
    continue; 
  }
  num1 = 1; // equalling num1 and num2 to 1 to exit the while loop else it will be an infinite loop
  num2 = 1;

}
len1 = seqlenOne; 
len2 = seqlenTwo;
}

void singleInput(char sequence[],int length)
{
    while (num1 == 0)
    {
        int choice = 0;
        printf("Enter the sequence: \n");
        fgets(seq1, 10001, stdin);
        length = strlen(sequence);
        if (length < 1 || length > 10001) // to ensure that the digits entered are within the range of the Assignment
        {
        printf("Error detected1!\n");
        continue; 
        }

        length--;
        for (int i = 0; i < length; ++i)
        {
        if(sequence[i] < '0' || (sequence[i]) > '9') // to ensure that the digits are between 0-9 a.k.a non-negative integers.
        {
          choice = 1;
          break; 
        }
        }

        if (choice)
        {
        printf("Error detected2!\n");
        continue;
        }

        if (sscanf(sequence, "%d", &num2) != 1) //same input validation methods for the second sequence as well
        {
        num2 = 0;
        printf("one of your inputted sequences are of (length = 0): \n"); // prints this message when a newline character is entered into the first sequence
        continue; 
        }
       num1 = 1; // equalling num1 and num2 to 1 to exit the while loop else it will be an infinite loop
       num2 = 1; 
    }
len3 = length;    

}


int generateInstance(int desiredLen1)
{
  int *aPtr = malloc(sizeof(int) * desiredLen1);
  //srand(time(NULL)); 
 
 for (int i = 0; i < desiredLen1; i++)
 {
  aPtr[i] = (rand() % 9) + 1;
  printf("%d", aPtr[i]);
 }
  printf("\n");
  return *aPtr; 
}

char generateDoubleInstance(char fileName[])
{
  srand(time(NULL)); 
int seqlen1 = 0;
int seqlen2 = 0;

FILE *myFile2 = fopen(fileName, "w");
  

printf("Enter the length of the two sequences: ");
scanf("%d %d", &seqlen1, &seqlen2);

int arr1[seqlen1];
int arr2[seqlen2];
 
for (int i = 0; i < seqlen1; i++)
 {
   arr1[i] = (rand() % 9) + 1;
 }

for (int j = 0; j < seqlen1; j++)
 {
   arr2[j] = (rand() % 9) + 1;
 }


 for (int i = 0; i < seqlen1; i++)
 {
   fprintf(myFile2, "%d", arr1[i]);
 }
  fprintf(myFile2, "\n");

 for (int j = 0; j < seqlen2; j++)
 {
   fprintf(myFile2, "%d", arr2[j]);
 }
 fclose(myFile2);
  return 0; 
}

char* readInFile(char fileName[], int *length)
{
  FILE *myFile;

  char *c = malloc(sizeof(int) * 10001);
  char f;
  myFile = fopen(fileName, "r");

    do
    {
        f = fgetc(myFile);
        if(f==' ')
        {
          continue;
        }
        if(f == '\n')
        {
          printf("\n");
        }
        c[*length] = f;
        ++(*length);

    } while(f != EOF);    
printf("\n");

return c;
}

void readOutFile(char fileName[],int *sequence, int seqlen)
{
  FILE *myFile2 = fopen(fileName, "w");
  int arr3[seqlen];

  for (int k =0; k < seqlen; k++)
  {
    arr3[k] = sequence[k];
  }

    for (int i = 0; i < seqlen; i++)
    {
      fprintf(myFile2, "%d",arr3[i]);
    }  
  
 
  fclose(myFile2);
}


















