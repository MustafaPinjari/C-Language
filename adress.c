#include<stdio.h>
int main()
{

   char num[]={"element"};
    int i,*j;
    j=&num[0]; 
    for(i=0;i<=5;i++)
    {
        printf("address =%u \t",i);
        printf("element =%d\n",*j);
        j++;

    }
  return 0;
}