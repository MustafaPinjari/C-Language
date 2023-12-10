#include<stdio.h>
int main()
{
    char a[2],s;
    int  number,price,date_of_purchase;
    int I=2;
    for(s=0;s<2;s++)
        {
            printf("\nenter the code number of goods:");
                scanf("%d",&number);
                    printf("\n enter the price of goods :");
                        scanf("%d",&price);
                    printf("\n enter the date of purchase :");
                scanf("%d",&date_of_purchase);
        }
     
        { 
            printf("             **  INVENTORY ** \n");
                printf("------------------------------------------------------------------\n");
                printf("S.N.|   CODE  |  PRICE |  DATE \n");
            printf("------------------------------------------------------------------\n");
        }
    for (I=0;I<2;I++)
        {  
            printf("%d     %d        %d          \n",I+ 1,number,price,date_of_purchase);
            printf("------------------------------------------------------------------\n");
        }   
    
return 0;
}