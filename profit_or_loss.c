#include<stdio.h>
    int main()
    {
        int cp,sp,profit,loss;
            printf("\n ENTER YOUR  SELLING PRICE   :");
                scanf("%d",&sp);
                    printf("\n ENTER YOUR COST PRICE :");
                        scanf("%d",&cp);

            if(cp<sp)
                 {
                     printf("\n  YOU ARE IN PROFIT DUDE!!");
                     profit=sp-cp;
                     printf("\n YOU ARE IN PROFIT OF  %d RUPEES",profit);  
                 }
                           else
                                 {
                                     printf("\n YOU ARE IN LOSS DUDE!!");
                                     loss=cp-sp;
                                     printf("\n YOU ARE IN LOSS OF %d RUPEES",loss);
                                  }
            return 0;
    }
    