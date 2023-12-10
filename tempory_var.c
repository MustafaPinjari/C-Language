#include<stdio.h>
int main()
{
    int n1,n2,temp;
    
    printf("Enter a number 1 :");
    scanf("%d",&n1);

    printf("Enter a number 2 :");
    scanf("%d",&n2);

     printf("you enter %d in number 1 value before swaping\n",n1);  
     printf("you enter %d in number 2 value  before swaping \n",n2);

     temp=n1;
     n1=n2;
     n2=n1;
     printf("after swaping number 1 is %d\n",n1);
     printf("after swaping number 2 is %d\n",n2);

return 0;
}