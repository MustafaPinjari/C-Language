#include<stdio.h>
    void main()
    {
        int x[2][3],i,j;

            for(i=0;i<=1;i++)/*ROW LOOP*/
                {
                    for(j=0;j<=2;j++)/*COLOUMN LOOP*/
                        {
                            printf("ENTER ELEMENTS : ");
                            scanf("%d",&x[i][j]);
                        }
                }

            for(i=0;i<=1;i++)
                {
                    printf("\n");
                        for(j=0;j<=2;j++)
                            {
                                printf("%d \t",x[i][j]);
                            }
                }    
    }












