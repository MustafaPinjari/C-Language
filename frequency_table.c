#include<stdio.h>
#define MAXVAL 5
#define COUNTER 5
void main()
{
        float value[MAXVAL];
        int i,low,high;
        int group[COUNTER]={0,0,0,0,0,0,0,0,0,0,0};

            for(i=0;i<MAXVAL;i++)
                {
                    printf("ENTER ELEMENTS TO FIND FREQUENCY :");
                    scanf("%f",&value[i]);

                        ++group[(int)value[i]/10];
                }

                printf("\n");
                printf("GROUP  |   RANGE     |   FREQUENCEY \n\n");

                    for(i=0;i<COUNTER;i++)
                    {
                        low=i*10;
                            if(i==10)
                            high=100;

                                else
                                    high=low+9;
                                    printf("\n %2d    | %3d to %3d  |   %d \n ",i+1,low,high,group[i]);
                    }
}
//type of variation for table//