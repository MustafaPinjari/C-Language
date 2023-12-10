#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
    {
      int a;
      int b;
            
            printf("\n enter the value of a=");
                scanf("%d",&a);
                    printf("\n enter the value of b =");
                        scanf("%d",&b);
            printf("before swap,value of a=%d \n",a);
                printf("before swap,value of b=%d \n",b);
                    swap(&a,&b);
                        printf("after swap,value of a=%d \n",a);
                            printf("after swap,value of b=%d",b);

    }

            void swap(int*x,int*y)
                {
                    int temp;
                        temp=*x;
                            *x=*y;
                                *y=temp;
                                
                }