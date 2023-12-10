#include <stdio.h>
 
void main()
{
    int n1, n2, gcd, lcm, remainder, numerator, denominator;
 
    printf("Enter two numbers:\n");
    scanf("%d %d", &n1, &n2);
 
    //To find numerator and denominator
    numerator = (n1>n2)?n1:n2;
    denominator = (n1<n2)?n1:n2;
    remainder = numerator % denominator;
 
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    lcm = n1 * n2 / gcd;
    printf("GCD of %d and %d = %d\n", n1, n2, gcd);
    printf("LCM of %d and %d = %d\n", n1, n2, lcm);
}