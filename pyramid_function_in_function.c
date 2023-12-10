#include <stdio.h>

void num()
 {
   int i, j, rows;
   printf("ENTER NUMBER OF ROWS TO PRINT NUMBER'S IN PYRAMID PATTERN : ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i)
    {
      for (j = 1; j <= i; ++j) 
      {
         printf("%d ", j);
      }
      printf("\n");
   }
  
}

void abc()
 {
   int i, j;
   char input, alphabet = 'A';
   printf("ENTER NUMBER OF ROWS TO PRINT ALPHABET'S IN PYRAMID PATTERN: ");
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }

}

void star()

{
   int i, j, rows;
   printf("ENTER NUMBER OF ROWS TO PRINT '*' IN PYRAMID PATTERN: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i)
   {
      for (j = 1; j <= i; ++j)
      {
         printf("*");
      }
      printf("\n");
   }
   
}

void finalcall()
{
   abc();
   num();
   star();
}

int main()
{
   finalcall();
   return 0;
}