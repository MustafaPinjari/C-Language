#include<stdio.h>
#include<math.h>
#define PERIOD  10
#define     PRINCIPAL   5000.0
int main() 
{
    int year;
    float amount,value,inrate;

        amount=principal;
        inrate=0.11;
        year=0;
        while(year<=PERIOD)
            {
                printf("%2d %8.2f \n",year,amount);
                    value=amount+inrate
            }
return 0;
}