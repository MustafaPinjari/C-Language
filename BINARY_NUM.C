#include <stdio.h>
#include <string.h>

void print_binary(char c)
{
    int i;
    for (i = 7; i >= 0; i--)
    putchar((c & (1 << i)) ? '1' : '0');
    putchar(' ');
}

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++)
        print_binary(str[i]);

    return 0;
}