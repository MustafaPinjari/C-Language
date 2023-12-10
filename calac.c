#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c;
    char ch;
    printf("Enter  a symbol: ");
    scanf("%c",&ch);

    printf("\n Enter 1st number: ");
    scanf("%f",&a);
    printf("\n Enter 2nd number: ");    
    scanf("%f",&b);

    switch (ch)
    {
    case '+':
        c=a+b;
        printf("\n Result: %f",c); 
        break;

        case '-':
        c=a-b;
        printf("\n Result: %f",c); 
        break;
        
        case '*':
        c=a*b;
        printf("\n Result: %f",c); 
        break;
        
        case '/':
        c=a/b;
        printf("\n Result: %f",c); 
        break;
        
       
        
       
        
        default:
        printf("\n Invalid Input");
        break;
    
    
    }
return 0;
}