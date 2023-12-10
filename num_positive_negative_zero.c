#include<stdio.h>
    int main()
    {
        int n;

            printf("\n enter a number = ");
                scanf("%d",&n);

                    if(n<0)
                    {
                        printf("\n number is negative =%d",n);
                    }
                        else if(n>0)
                        {
                            printf("\n number is positive =%d",n);
                        }
                            else
                            {
                                printf("number is zero");
                            }
    }