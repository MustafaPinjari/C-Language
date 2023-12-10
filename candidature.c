#include<stdio.h>
 void main()
 {
    int a;
    float h,w;
             
             printf("\n enter your age");
                scanf("%d",&a);
                 
                    printf("\n enter your height=");
                        scanf("%f",&h);

                            printf("\n enter your weight=");
                                scanf("%f",&w);
                                 
    if (a>=16&&a<=19 || h>=5.5 && h<=6.6 || w>=55 && w<=62) 
    {
        printf("you are selected");
    }                            
        else
        {
            printf("you are fired \n");
        }
 }