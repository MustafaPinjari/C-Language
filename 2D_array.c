#include<stdio.h>
#include<string.h>
    void main()
    {
        int a[3][4],i,j;

        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
                {
                    printf("enter element=");
                    scanf("%d",&a[i][j]);
                }            
        }
                        for(i=0;i<=2;i++)
                            {
                                printf("\n");
                                    for(j=0;j<=3;j++)
                                        {
                                            printf("%d\t",a[i][j]);
                                        }
                            }
                    
    }