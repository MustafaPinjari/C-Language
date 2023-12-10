#include<stdio.h>
#include<conio.h>
void linkfloat();
void main()

{
    
    struct city
    {
        char name;
        long int p;
        float literacy;

    };

    struct city c[100];

        int i,b;
        printf("ENTER CITY NUMBER");
            scanf("%d",&b);

            printf("ENTER CITY POPULATION LITERACY :");



            for(i=1;i<=b;i++)
            {
                printf("\n Enter %d City Data",i);
                scanf("%s%1d%f",&c[i].name,&c[i],c[i].literacy);
            }
            for(i=1;i<=b;i++)

            {
                printf("%d City Data",i);
                    printf("City Name - %s\n Population-%1d\n Literacy-%f",c[i].name,c[i].p,c[i].literacy);

            }       

           void linkfloat ()
{
    float a=0,*b;
    b=&a;
    a=*b;
} 
     

}
