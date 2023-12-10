#include<stdio.h>
int main()
{
    int a,b,c,set1,set2,user;
    float x;

                    printf("\n enter your set=");
                    scanf("%s",&user);
                    if(user==set1)
                    {
                        a=250;
                        b=85;
                        c=25;
                        x=a/b-c;

                            printf("%f",x);
                    }
                        else
                        {
                            a=300;
                            b=70;
                            c=70;
                            x=a/b-c;
                            printf("%f",x);
                        }

return 0;
}