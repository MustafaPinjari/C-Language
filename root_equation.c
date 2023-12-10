#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c,r1,r2,x;

    printf("Enter the value of a : ");
        scanf("%f",&a);

        printf("Enter the value of b :");
            scanf("%f",&b);

                printf("Enter the value of c :");
                    scanf("%f",&c);

                    x=b*b-4*a*c;
                    if(x>0)
                    {
                        r1=-b+sqrt(x)/(2*a);
                        r2=-b-sqrt(x)/(2*a);
                        printf("\n the real roots = %.2f ,%.2f ",r1,r2);
                    }
                    else if(x==0)
                    {
                        r1=-b/(2*a);
                        r2=-b/(2*a);
                            printf("roots are equal = %.2f,%.2f ",r1,r2);
                    }    
}