#include<stdio.h>
    int main()
    {
       int a,b,sub,add,mult,div;
       char opert;

            printf("\n enter operator (function you want to perform) = ");
                scanf("%c",&opert);

                printf("\n enter a vlaue = ");
                    scanf("%d",&a);

                        printf("\n enter b value");
                            scanf("%d",&b);

                                if(opert==+||)
                                {
                                    add=a+b;
                                    printf("\n addition of two number = %s",add);
                                }
                                    if(opert==-)
                                        {
                                            sub=a-b;
                                            printf("\n substraction of two number is =%d",sub);
                                        }
                                                 if(opert==/)
                                                 {
                                                      
                                                      div=a/b;
                                                       printf("\n division of teo number is =%d",div);
                                                 }
                                               if(opert==*)
                                                            {
                                                                mult=a*b;
                                                                printf("\n multiplication of two number is =%d",mult);
                                                            }
                                                                  
    }