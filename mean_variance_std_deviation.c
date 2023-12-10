#include <stdio.h>
#include <math.h>
#define MAXSIZE 10

void main()
    {

        float nums[MAXSIZE];
        int  i, n;
        float mean, var, sd, sum=0, v_sum=0;   /* declares the variables*/
        printf("Enter the number of elements\n");   /* accepts values from user */
        scanf("%d", &n);
        printf("Enter %d real numbers\n",n);
           for (i = 0; i < n; i++)
            {
                scanf("%f", & nums[i]);
            }
            for(i=0; i<n; i++)   /* Compute the sum of all elements */
            {
                  sum = sum + nums[i]; 
            }
           mean = sum /(float) n;  /* Calculating the mean using the equation */
           for(i=0; i<n; i++)  /* Compute  variance  and standard deviation */
            {
                  v_sum= v_sum + pow((nums[i] - mean), 2);                  
            }
           var = v_sum / (float) n;   /* calculate the variance using general equation */                   
           sd = sqrt(var);  /* calculating standard deviation */
          
           /* prints the output mean, standard deviation, and variance */
           printf("Mean of all elements  = %.2f\n", mean);
           printf("The variance of all elements = %.2f\n", var);
           printf("Standard deviation SD = %.2f\n", sd);  
   }