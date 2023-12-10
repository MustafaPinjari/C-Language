#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter the first number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    printf("\n before swaping value of a is %d ",a);
    printf("\n before swaping value of b is %d ",b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n after swaping value of a is %d ",a);
    printf("\n after swaping value of b is %d ",b);
return 0;
}