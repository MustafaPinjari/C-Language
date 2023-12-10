#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[5][50],temp[50];
    int i,j;

    for(i=0;i<5;++i)
    {    
    printf("ENTER %d WORDS :",i+1);
    fgets(str[i],sizeof(str[i]),stdin);
    }

    for(i=0;i<5;++i)
        {
            for(j=i+1;j<5;++j)
            {
                if(strcmp(str[i],str[j])>0)
                    {
                        strcpy(temp,str[i]);                        
                        strcpy(str[j],str[i]);                        
                        strcpy(str[j],temp);                        
                        
                    }
            }
        }
        printf("\n IN SEQUENCE IT SHOULD BE :- \n");

            for(i=0;i<5;++i)
            {
                fputs(str[i],stdout);
            }
            return 0;
}