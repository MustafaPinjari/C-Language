#include<stdio.h>
    int main()
    {
        int m1[3][3],m2[3][3],m3[3][3];
            int i,j;

                // input elements in matrix 

                for(i=0;i<=2;i++)
                    {
                        for(j=0;j<=2;j++)
                         {
                            printf("enter the element of matrix 1=");
                                scanf("%d",&m1[i][j]);
                                    printf("enter the element of matrix 2=");
                                        scanf("%d",&m2[i][j]);
                         }
                    }

                    //printing elements u enter in  matrix 1

                    printf("\n matrix 1");
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m1[i][j]);
                                }
                    }

                    //printing elements u enter in  matrix 2

                    printf("\n matrix 2");
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m2[i][j]);
                                }
                    }      
                    // adding two martrix 
                    printf("\n \n addition of two matrix");
                for(i=0;i<=2;i++)
                    {
                        
                        for(j=0;j<=2;j++)
                        {
                            m3[i][j]=m1[i][j]+m2[i][j];
                        }
                    }
                    // printing addition of two matrix
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m3[i][j]);
                                }
                    }
               
    }
