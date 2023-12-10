#include<stdio.h>
#include<conio.h>
#include<string.h>
        void main()
        {
            char str1[20],str2[20];
                printf("enter 1st string:");
                gets(str1);

                    printf("enter 2nd string:");
                    gets(str2);

                        if(strcmp(str1,str2)==0)
                            {
                                printf("string are equal");
                            }
                                else
                                    {
                                        printf("string is not equal");
                                    }
       }