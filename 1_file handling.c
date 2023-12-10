#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char str[100];

    ptr=fopen("mytext.txt","r");
    fscanf(ptr,"%s",str);
    printf("CONTENT : %s",str);
return 0;
}