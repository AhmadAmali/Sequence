#include "main.h"

char *filename;
int main(int argc, char *argv[]) 
{	
	 // variable declaration, arrays decalred at 10001 to accomodate for 10,000 digits + small error

  int seqlen1 = 0, seqlen2 = 0;
  int functionlen =0;
  int *length = &functionlen;

  
	 if (argc == 1)
  {
    printf("Please enter an appropriate command-line argument\n");
  }
  else if (strcmp(argv[1], "-cp") == 0)
  {
    inputValidation(seq1,seq2,seqlen1,seqlen2);
    LCPS(seq1,seq2,len1,len2);
  }
  else if (argc == 2 && strcmp( argv[1], "-c") == 0)
  {
    inputValidation(seq1,seq2,seqlen1, seqlen2);
  
    LCS(seq1, seq2, len1, len2, 1);
  }
  else if (argc == 2 && strcmp( argv[1], "-t") == 0)
  {
   singleInput(seq1, seqlen1);

   LTS(seq1, len3);
  }
  else if (argc == 2 && strcmp( argv[1], "-p") == 0)
  {
    singleInput( seq1, seqlen1);

    LPS(seq1, len3, 0);
  }
  else if (argc == 2 && strcmp(argv[1], "-g") == 0)
  {
    printf("Enter the length of the two sequences: ");
    scanf("%d %d", &seqlen1, &seqlen2);

    generateInstance(seqlen1);
    srand(time(NULL)); 
    generateInstance(seqlen2);
  }
  else if (strcmp(argv[1], "-i") == 0)
  {
    char *y;
    y = readInFile(argv[2], length);
    printf("%s\n", y);
  }
  else if (strcmp(argv[2], "-i") == 0 && strcmp(argv[1], "-p") == 0)
  {
    char *y;
    y = readInFile(argv[3], length);

    LPS(y , (*length), 0);
  }

  else if (strcmp(argv[2], "-i") == 0 && strcmp(argv[1], "-t") == 0)
  {
    char *x;
    x = readInFile(argv[3], length);

    LTS(x, (*length));
  }

  else if (strcmp(argv[2], "-o") == 0 && strcmp(argv[1], "-p") == 0)
  {
    singleInput(seq1, seqlen1);
    filename = argv[3];
    LPSreturn(seq1, len3, 2);
  }
  else if (strcmp(argv[2], "-o") == 0 && strcmp(argv[1], "-t") == 0)
  {
    singleInput(seq1, seqlen1);
    filename = argv[3];
    LTSreturn(seq1, len3, 1);
  }
  else if (strcmp(argv[2], "-o") == 0 && strcmp(argv[1], "-g") == 0)
  {
    
    generateDoubleInstance(argv[3]);
  }
  else if (strcmp(argv[2], "-i") == 0 && strcmp(argv[1], "-p") == 0 && strcmp(argv[4], "-o") == 0)
  {
    char *y;
    char x;
    y = readInFile(argv[3], length);
    x = LPSreturn(y , (*length), 1);
    filename = argv[5];
    printf("%c", x);
    LPSreturn( &x ,(*length), 2);
  }
  
  else
    printf("Please enter an appropriate command-line argument\n");

return 0;


}