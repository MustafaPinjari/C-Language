#include<stdio.h>
#include<math.h>

    int main()
    {
        int angle,max;
        max=180;
        float x,y,pi;
        pi=3.14;

        angle=0;
        printf("\t    angle   |  cos(angle) \n \n");
            while(angle<=max)
            {   
                x=(pi/max)*angle;
                y=cos(x);
                printf("%15d     | %13.4f \n",angle,y);
                angle=angle+10;

            }
            return 0;
    }