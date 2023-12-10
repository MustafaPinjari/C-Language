#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,l;
    printf("Enter  value of x : ");
    scanf("%d",&x);
    printf("Enter value of y : ");
    scanf("%d",&y);
    l=x-(~y)-1;
    printf("\b %d",l);
    return 0;
}