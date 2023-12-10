#include<stdio.h>
#include<conio.h>

struct car
{
    int cr_number;
    char cr_name[30];
    float cr_milage;
};

    void main()
    
    {
        struct car c1,c2;
        int i,j;

                printf("\n \n \n \t ***ENTER DETAILS OF CAR 1***");

            printf("\n ENTER CAR NUMBER  :");
            scanf("%d",&c1.cr_number);

            printf("\n ENTER CAR NAME :");
            scanf("%s",&c1.cr_name);

            printf("\n ENTER CAR MILAGE  :");
            scanf("%f",&c1.cr_milage);


                 printf("\n \n \n \t ***ENTER DETAILS OF CAR 2***");

            printf("\n ENTER CAR NUMBER  :");
            scanf("%d",&c2.cr_number);

            printf("\n ENTER CAR NAME :");
            scanf("%s",&c2.cr_name);

            printf("\n ENTER CAR MILAGE  :");
            scanf("%f",&c2.cr_milage);

            for(i=0;i<2;i++)
            {
                printf("\n \n");
                for(j=0;j<=21;j++)
                {
                   
                 printf("-X-♥-",i,j);
                }
            
            }
            printf("\n\n\t\t\n\n DETAIL YOU ENTERED ");

                printf("\t\t\n\n\t\t DETAILS OF FIRST CARS");

                printf("\n\nNAME:%s",c1.cr_name);
                printf("\n\nNUMBER: %s",c1.cr.number);
                printf("\n\n MILAGE : %f",c1.cr.milage);

                printf("\n \n \t\t\n\n DETAILS OF SECOND CAR");
                printf("\n\nNAME:%s",c2.cr_name);
                printf("\n\nNUMBER: %s",c2.cr.number);
                printf("\n\n MILAGE : %f",c2.cr.milage);



    }