#include <stdio.h>
int main()
{
struct Product {
    char name[100];
    int code;
    int quantity;
};
{
    struct Product products[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter the name of product %d: ", i+1);
        scanf("%s", products[i].name);

        printf("Enter the code of product %d: ", i+1);
        scanf("%d", &products[i].code);

        printf("Enter the quantity of product %d: ", i+1);
        scanf("%d", &products[i].quantity);
    }

    printf("\n\nProduct Details:\n\n");
    printf("+---------------------+-------+----------+\n");
    printf("|      Product Name   | Code  | Quantity |\n");
    printf("+---------------------+-------+----------+\n");
    for (int i = 0; i < 3; i++) {
        printf("| %20s | %5d | %8d |\n", products[i].name, products[i].code, products[i].quantity);
        printf("+---------------------+-------+----------+\n");
    }

    return 0;
}
}