#include<stdio.h>

    int main()
    {
        int m1[2][2],m2[2][2],m3[2][2];
            int i,j;
                for(i=0;i<=1;i++)
                    {
                        for(j=0;j<=1;j++)
                         {
                            printf("enter the element of matrix a[%d][%d]=",i+1,j+1);
                                scanf("%d ",&m1[i][j]);
                                    printf("enter the element of matrix a[%d][%d]=");
                                        scanf("%d ",&m2[i][j]);
                         }
                    }
                    printf("\n matrix 1");
                for(i=0;i<=1;i++)
                    {
                        printf("\n");
                            for(j=0;j<=1;j++)
                                {
                                    printf("%d \t",m1[i][j]);
                                }
                    }
                    printf("\n matrix 2");
                for(i=0;i<=1;i++)
                    {
                        printf("\n");
                            for(j=0;j<=1;j++)
                                {
                                    printf("%d \t",m2[i][j]);
                                }
                    }        
                    printf("\n addition of two matrix");
                    
                        
                for(i=0;i<=2;i++)
                    {
                        for(j=0;j<=2;j++)
                        {
                            m3[i][j]=m1[i][j]+m2[i][j];
                        }
                    }
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m3[i][j]);
                                }
                    
                    }

                    return 0;
    }
