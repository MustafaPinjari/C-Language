#include<stdio.h>
int main()
{
 
    int *pc, c, d;
c = 5;
d = 15;

pc = &c;
printf("%d",pc); // Output: 5
pc = &d; 
printf("\n%d",pc); // Output: -15
return 0;
}