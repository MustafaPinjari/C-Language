#include <stdio.h>
#include <string.h>

int main() 
{
   char s[100],l[100];
   int i,j;
    printf("\nEnter a string in : ");
     scanf("%d %d",&i,&j);
      
      

   for (i = 0; s[i]!='\0'; i++) 
   {
      if(s[i] >= 'a' && s[i] <= 'z') 
      {
         s[i] = s[i] - 32;
      }
   }

   for (j = 0; l[j]!='\0'; j++)
    {
      if(l[j] >= 'A' && l[j] <= 'Z') 
      {
         l[j] = l[j] + 32;
      }
   }
   printf("\nString in Upper Case = %s",s);
    printf("\nString in lower Case = %s",l);
   return 0;
}