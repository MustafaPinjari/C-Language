#include<stdio.h>
int main()
{ 
    float c,f;
    printf("\n enter the temperature in celsius :");
    scanf("%f",&c);

    f=(c*9.0/5.0)+32;

    printf("The temperature in fahrenheit is %f ",f);


return 0;
}