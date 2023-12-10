#include<stdio.h>
#include<conio.h> 
#include<string.h>
void main()
{
char str[20];
int i;
        printf("\n Enter String = ");
            gets (str);

            for (i=0; i<= strlen (str); i++)
    {
        if (str[i]>=97 && str[i] <= 122) 
            {
                str[i]=str[i]-32;
            }   

        else if (str[i]>=65 && str [i] <=90) 
            {
                str[i]=str[i]+32;
            }  
    }
        printf ("\n The Converted String = %s",str);
 }
