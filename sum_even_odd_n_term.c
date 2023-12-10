#include<stdio.h>
 
int main()
{
  int i, num, ES = 0, OS = 0;
 
  printf("\n enter the 'n' numbers : ");
  scanf("%d", &num);
  
  for(i = 1; i <= num; i++)
  {
  	if ( i%2 == 0 ) 
  	{
        ES = ES + i;
  	}
  	else
  	{
  		OS = OS + i;
	}
  }
printf("\n The Sum of Even Numbers upto %d  = %d", num, ES);
printf("\n The Sum of Odd Numbers upto %d  = %d", num, OS);

  return 0;
}