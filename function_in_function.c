#include<stdio.h>

void addition()

{
int add,num1,num2;
printf("\t \t **FOR ADDITION**");
printf("\n \n Enter a number: ");
scanf("%d",&num1);
printf("\n \n Enter a number: ");
scanf("%d",&num2);
add=num1+num2;
printf("\n \t\t --ADDITION=%d--",add);
}

void substraction()

{
int sub,num1,num2;
printf("\n \n \n \t \t **FOR SUBSTRACTION**");
printf("\n \n Enter a number: ");
scanf("%d",&num1);
printf("\n \n Enter a number: ");
scanf("%d",&num2);
sub=num1-num2;
printf("\n \t\t --SUBSTRACTION=%d--",sub);
}

void mul()

{
int mul,num1,num2;
printf("\n\n\n\t \t **FOR MULTIPLICATION**");
printf("\n\n Enter a number: ");
scanf("%d",&num1);
printf("\n \n Enter a number: ");
scanf("%d",&num2);
mul=num1*num2;
printf("\n \t \t--MULTIPLICATION =%d--",mul);
}
void div()

{
float DIV,num1,num2;
printf("\n \n\n \t \t **FOR DIVISION**");
printf("\n\n Enter a number: ");
scanf("%f",&num1);
printf("\n\n Enter a number: ");
scanf("%f",&num2);

DIV=num1/num2;
printf("\n \t \t--DIVISION=%f--",DIV);
}


void finalcall()

{
     addition();
     substraction();
     mul();
     div();
}
int main()
{

 finalcall();
return 0;
}