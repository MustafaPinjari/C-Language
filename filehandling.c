#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char str[100]="hello";

    ptr=fopen("mytext.txt","+r");
    fprintf(ptr,"\n %s",str);
    printf("CONTENT : %s",str);
return 0;
}

/*#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("mytext.txt", "w");  // Open the file in read mode

    // Check if the file exists
    if (fp == NULL) 
    {
        printf("File not found\n");
        return 1;
    }

    // Read and print each character of the file
    while ((ch = fgetc(fp)) != EOF) 
    {
        putchar(ch);
    }

    fclose(fp);  // Close the file

    return 0;
}*/