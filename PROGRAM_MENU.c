//CODE BY MUSTAFA❤️
//A MENU TO FIND???
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>
    
                                /*for factorial*/
    void factorial()
        {
            int num, i;
            unsigned long long fact = 1;

                printf("Enter a positive integer: ");
                    scanf("%d", &num);

    if (num < 0)
        {
            printf("Error: Factorial of a negative number doesn't exist.\n");
        }
    
         else
            {
                for(i =1;i<=num;++i) 
                    {
                        fact *= i;
                    }
                printf("Factorial of %d = %llu\n", num, fact);
            }
        }
                                /* end for factorial*/
                            /****************************/
                        /*for function for add/sub/mul/div */

  int fun()
       
    {
        float a,b,c;
        char ch;
            
            printf("Enter  a symbol: ");
                scanf("%c",ch);

                printf("\n Enter 1st number: ");
                    scanf("%f",&a);
                
                printf("\n Enter 2nd number: ");    
                    scanf("%f",&b);

        switch(ch)
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
        
                return 0;
            }
    }
                                 /* end for calculator*/
                               /****************************/
                             /*for finding simple intrest */

        int si()

            {
                float principal, rate, time, interest;

                 // Input principal, rate, and time
                    printf("\n Enter principal amount: ");
                        scanf("%f", &principal);
   
                    printf("\n Enter interest rate: ");
                        scanf("%f", &rate);
    
                    printf("\n Enter time period in years: ");
                            scanf("%f", &time);

                        // Calculate simple interest    

                        interest = (principal * rate * time) / 100;

                            // Output the result
                    printf("\n Simple interest = %f", interest);

                return 0;
            }

                                /* end for simple intrest*/
                               /****************************/
                              /*for finding  COMPOUND intrest*/

        int ci()
            {
    
                float principal, rate, time, compound_interest;

                    // Input the principal amount, rate, and time period
                
                        printf("Enter the principal amount: ");
                            scanf("%f", &principal);

                        printf("Enter the interest rate: ");
                            scanf("%f", &rate);

                        printf("Enter the time period (in years): ");
                            scanf("%f", &time);

                    // Calculate the compound interest
                    
                    compound_interest = principal * pow((1 + rate/100), time) - principal;

                    // Display the result
                    
                        printf("The compound interest is: %f", compound_interest);

                return 0;
            }
                                    /* end for COMPOUND intrest*/
                               /****************************/
                              /*for finding   cos angle */

             int angle()
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
    }
                                /* end for cos angle*/
                               /****************************/
                              /*for finding  quadratic equation*/

    int qe()
    {
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;
        
        printf("\n Enter values of a of quadratic equation (aX^2 + bX + c): ");
            scanf("%f",&a);
            
        printf("\n Enter value of b of quadratic equation (aX^2 + bX + c): ");
            scanf("%f",&b);
    
        printf("\n Enter value of c of quadratic equation (aX^2 + bX + c): ");
            scanf("%f",&c);
    
            /* Calculate discriminant */
    
        discriminant = (b * b) - (4 * a * c);
    
            /* Compute roots of quadratic equation based on the nature of discriminant */
    
        switch(discriminant > 0)
            {
                case 1:
                
                    /* If discriminant is positive */
            
                root1 = (-b + sqrt(discriminant)) / (2 * a);
                root2 = (-b - sqrt(discriminant)) / (2 * a);
            
                printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);         
                break;
            
                case 0:
                    
                    /* If discriminant is not positive */
        
        switch(discriminant < 0)
            {
               case 1:
        
                    /* If discriminant is negative */
        
                root1 = root2 = -b / (2 * a);
                imaginary = sqrt(-discriminant) / (2 * a);
        
                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                            root1, imaginary, root2, imaginary);
                break;
        
                case 0:
                    /* If discriminant is zero */
        
                    root1 = root2 = -b / (2 * a);
        
                    printf("\n Two equal and real roots exists: %.2f and %.2f", root1, root2);
        
                break;
            }
    }
}
                                 /* end for quadratic equation*/
                               /****************************/
                              /*for finding  division of two matrix*/

int add_matrix()
    {
        int m1[3][3],m2[3][3],m3[3][3];
            int i,j;

                // input elements in matrix 

                for(i=0;i<=2;i++)
                    {
                        for(j=0;j<=2;j++)
                         {
                            printf("enter the element of matrix 1=");
                                scanf("%d",&m1[i][j]);
                                    printf("enter the element of matrix 2=");
                                        scanf("%d",&m2[i][j]);
                         }
                    }

                    //printing elements u enter in  matrix 1

                    printf("\n matrix 1");
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m1[i][j]);
                                }
                    }

                    //printing elements u enter in  matrix 2

                    printf("\n matrix 2");
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m2[i][j]);
                                }
                    }      
                    // adding two martrix 
                    printf("\n \n addition of two matrix");
                for(i=0;i<=2;i++)
                    {
                        
                        for(j=0;j<=2;j++)
                        {
                            m3[i][j]=m1[i][j]+m2[i][j];
                        }
                    }
                    // printing addition of two matrix
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m3[i][j]);
                                }
                    }
               
    }

                             /* end for addition of two matrix*/
                               /****************************/
                              /*for finding substraction of two matrix*/ 

int sub_matrix()
    {
        int m1[3][3],m2[3][3],m3[3][3];
            int i,j;

                // input elements in matrix 

                for(i=0;i<=2;i++)
                    {
                        for(j=0;j<=2;j++)
                         {
                            printf("enter the element of matrix 1=");
                                scanf("%d",&m1[i][j]);
                                    printf("enter the element of matrix 2=");
                                        scanf("%d",&m2[i][j]);
                         }
                    }

                    //printing elements u enter in  matrix 1

                    printf("\n matrix 1");
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m1[i][j]);
                                }
                    }

                    //printing elements u enter in  matrix 2

                    printf("\n matrix 2");
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m2[i][j]);
                                }
                    }      
                    //substraction two matrix 
                    printf("\n \n substraction of two matrix");
                for(i=0;i<=2;i++)
                    {
                        
                        for(j=0;j<=2;j++)
                        {
                            m3[i][j]=m1[i][j]-m2[i][j];
                        }
                    }
                    // printing substraction of two matrix
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m3[i][j]);
                                }
                    }
               
    }

                             /* end for substraction of two matrix*/
                               /****************************/
                              /*for finding  multiplication of two matrix*/
        
int mul_matrix()
    {
        int m1[3][3],m2[3][3],m3[3][3];
            int i,j;

                // input elements in matrix 

                for(i=0;i<=2;i++)
                    {
                        for(j=0;j<=2;j++)
                         {
                            printf("enter the element of matrix 1=");
                                scanf("%d",&m1[i][j]);
                                    printf("enter the element of matrix 2=");
                                        scanf("%d",&m2[i][j]);
                         }
                    }

                    //printing elements u enter in  matrix 1

                    printf("\n matrix 1");
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m1[i][j]);
                                }
                    }

                    //printing elements u enter in  matrix 2

                    printf("\n matrix 2");
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m2[i][j]);
                                }
                    }      
                    
                    //multiplication two matrix 

                    printf("\n \n multiplication of two matrix");
                for(i=0;i<=2;i++)
                    {
                        
                        for(j=0;j<=2;j++)
                        {
                            m3[i][j]=m1[i][j]*m2[i][j];
                        }
                    }

                    // printing multiplication of two matrix

                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m3[i][j]);
                                }
                    }
               
    }

                             /* end for multiplication of two matrix*/
                               /****************************/
                              /*for finding  division of two matrix*/

int div_matrix()
    {
        int m1[3][3],m2[3][3],m3[3][3];
            int i,j;

                // input elements in matrix 

                for(i=0;i<=2;i++)
                    {
                        for(j=0;j<=2;j++)
                         {
                            printf("enter the element of matrix 1=");
                                scanf("%d",&m1[i][j]);
                                    printf("enter the element of matrix 2=");
                                        scanf("%d",&m2[i][j]);
                         }
                    }

                    //printing elements u enter in  matrix 1

                    printf("\n matrix 1");
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m1[i][j]);
                                }
                    }

                    //printing elements u enter in  matrix 2

                    printf("\n matrix 2");
                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m2[i][j]);
                                }
                    }      
                    
                    //division two matrix 

                    printf("\n \n division of two matrix");
                for(i=0;i<=2;i++)
                    {
                        
                        for(j=0;j<=2;j++)
                        {
                            m3[i][j]=m1[i][j]/m2[i][j];
                        }
                    }

                    // printing division of two matrix

                for(i=0;i<=2;i++)
                    {
                        printf("\n");
                            for(j=0;j<=2;j++)
                                {
                                    printf("%d \t",m3[i][j]);
                                }
                    }
               
    }

                             /* end for division of two matrix*/
                               /****************************/
                              /*for finding  transpose a matrix*/

 int transpose_matrix() 
 {
    int matrix[3][3]; 
    int temp,i,j;
                        
    //take input of matrix
                    for(i=0;i<=2;i++)
                    {
                        for(j=0;j<=2;j++)
                         {
                            printf("\n Enter the element of matrix 1=");
                                scanf("%d",&matrix[i][j]);
                                   
                         }
                    }
    // Print the original matrix
                printf("Original matrix:\n");
                    for (int i = 0; i < 3; i++) 
                    {
                        for (int j = 0; j < 3; j++) 
                         {
                            printf("%d ", matrix[i][j]);
                         }
                         printf("\n");
                    }

    // Transpose the matrix
                    for (int i = 0; i < 3; i++) 
                    {
                        for (int j = i+1; j < 3; j++) 
                        {
                            temp = matrix[i][j];
                            matrix[i][j] = matrix[j][i];
                            matrix[j][i] = temp;
                        }
                    }

    // Print the transposed matrix
                     printf("Transposed matrix:\n");
                    for (int i = 0; i < 3; i++) 
                    {
                        for (int j = 0; j < 3; j++) 
                        {
                            printf("%d ", matrix[i][j]);
                        }
                        printf("\n");
                    }    
}                         
                                      /* end for transpose  matrix*/
                                  /************************************/
                              /*for finding  area & perimeter of rectangle*/



int ar_peri_rect()
    {
        float l,b,a,p;

            printf("\n enter the length of rectangle =");
                scanf("%f",&l);

                    printf("\n enter the breadth of rectangle =");
                        scanf("%f",&b);

                            a=l*b;
                                printf("\n area of rectangle is = %f",a);
                                
                                    p=2*(l+b);
                                        printf("\n perimeter of rectangle is =%f",p);                                          
    }
                                        
                                                 /* end for  area & perimeter of rectangle*/
                                              /************************************/
                                         /*for finding  area & perimeter of cicrle*/

 int ar_peri_circle()
{
    float r,a,p;
    float  pi=3.14;
        printf("\n enter radius of circle=");
            scanf("%f",&r);

                a=pi*r*r;
                    printf("\n area of circle =%f",a);

                    p=2*pi*r;
                        printf("\n perimeter of circle is =%f",p);


}

                                            /* end for  area & perimeter of cicrle*/
                                              /************************************/
                                         /*for finding  area & perimeter of triangle */


int ar_peri_triangle() 

{
    float a, b, c;
    float perimeter, s, area;

    printf("Enter the length of side a: ");
    scanf("%f", &a);

    printf("Enter the length of side b: ");
    scanf("%f", &b);

    printf("Enter the length of side c: ");
    scanf("%f", &c);

    perimeter = a + b + c;
    s = perimeter / 2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("Perimeter = %f units\n", perimeter);
    printf("Area = %f square units\n", area);

    return 0;
}
                                    /* end for  area & perimeter of triangle*/
                                              /************************************/
                                         /*for finding  area & perimeter of square */


int ar_peri_square() 
{
    float side;
    float perimeter, area;

    printf("Enter the length of the square's side: ");
    scanf("%f", &side);

    perimeter = 4 * side;
    area = side * side;

    printf("Perimeter = %f units\n", perimeter);
    printf("Area = %f square units\n", area);

    return 0;
}

                                           /* end for  area & perimeter of square*/
                                          /************************************/
                                         /*   for finding reverse integer   */

int rev_number()    
{    
    int n, reverse=0, rem;    
    printf("Enter a number: ");    
    scanf("%d", &n);    
    while(n!=0)    
    {    
        rem=n%10;    
        reverse=reverse*10+rem;    
        n/=10;    
    }    
    printf("Reversed Number: %d",reverse);    
    return 0;  
}

                                                    /* end for  reverse integer*/
                                                 /************************************/
                                         /*   for finding tempreturein ferahnite by celcius value  */

int c_f()
{
    int c,f;

    printf("Enter the tempreture in celcius :");
    scanf("%d",&c);
    
    // Convert temperature from Fahrenheit to Celsius
    
    f=c*9/5+35;
    
    printf("\n The Tempreture in ferahnite is %d",f);
return 0;
}

                                    /* end for tempreture in ferahnite by celcius value  */
                                    /************************************/
                                /*   for finding tempreture in celcius by Fahrenheit value */

int f_c() 
{
    float fahrenheit, celsius;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    // Convert temperature from Fahrenheit to Celsius
   
    celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
    
    return 0;
}

                        /* end for tempreture in celcius by Fahrenheit value  */
                                    /************************************/
                                /*   for finding sequence of words */




int lexical_word_order()
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


                                /* end for sequence of words*/
                                    /************************************/
                                /*   for finding  gcd & lcm */
int gcd_lcm()
{
    int n1, n2, gcd, lcm, remainder, numerator, denominator;
 
    printf("Enter two numbers:\n");
    scanf("%d %d", &n1, &n2);
 
    //To find numerator and denominator
    numerator = (n1>n2)?n1:n2;
    denominator = (n1<n2)?n1:n2;
    remainder = numerator % denominator;
 
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    lcm = n1 * n2 / gcd;
    printf("GCD of %d and %d = %d\n", n1, n2, gcd);
    printf("LCM of %d and %d = %d\n", n1, n2, lcm);
}


                                     /* end for gcd & lcm */
                                    /************************************/
                                   /*   for finding  struct_product_details*/


int pro_struct_details()
{
struct Product 
{
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

                                    /* end for struct_product_details*/
                                    /************************************/
                                   /*   for printing pattern of  numbers */

void num()
 {
   int i, j, rows;
   printf("ENTER NUMBER OF ROWS TO PRINT NUMBER'S IN PYRAMID PATTERN : ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i)
    {
      for (j = 1; j <= i; ++j) 
      {
         printf("%d ", j);
      }
      printf("\n");
   }
  
}


                                     /* end for printing pattern of  numbers*/
                                    /************************************/
                                   /*   for printing pattern of  alphabets in half pyramid shape  */
                            
void abc()
 {
   int i, j;
   char input, alphabet = 'A';
   printf("ENTER NUMBER OF ROWS TO PRINT ALPHABET'S IN PYRAMID PATTERN: ");
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }

}

                                /* end for printing pattern of  alphabets in half pyramid shape */
                                            /************************************/
                                   /*   for printing pattern of  * in half pyramid shape  */

void star()

{
   int i, j, rows;
   printf("ENTER NUMBER OF ROWS TO PRINT '*' IN PYRAMID PATTERN: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i)
   {
      for (j = 1; j <= i; ++j)
      {
         printf("*");
      }
      printf("\n");
   }
   
}

                                /* end for printing pattern of  * in half pyramid shape  */
                                            /************************************/
                                   /*   for finding string is palindrome or not  */


int palindrome()
{
    char string[20];
    int i, l,flag = 0;
    
    printf("Enter a string:");
    scanf("%s",&string);
    
    l = strlen(string);
    
    for(i=0;i < l ;i++)
       {
        if(string[i] != string[l-i-1])  
           {
            flag = 1;
            break;
           }
        }
    
    if (flag) 
    {
        printf("%s is not a palindrome", string);
    }    
    else 
    {
        printf("%s is a palindrome", string);
    }
    return 0;
}

                                    /* end for finding string is palindrome or not */
                                            /************************************/
                                   /*   for converting uppercase to lowercase*/


 void uppcase_lowcase()
        {
            char str[20];
                printf("Enter a string:");
                gets(str);

                    printf("\n lower string is:%s",strlwr(str));
                    
        
        }

                                 /* end for converting uppercase to lowercase */
                                            /************************************/
                                   /*   for  converting lowercase to uppercase*/
void lowcase_uppcase()
        {
            char str[20];
                 printf("enter a string in lower case =");
                 gets(str);

                        printf("\n upper string  is=%s",strupr(str));
        }

                                     /* end for converting uppercase to lowercase */
                                            /************************************/
                                   /*   for  reverse string*/

void reverse_chars()
            {
                char str[20];
                    printf("enter a string:");
                    gets(str);
                        printf("\n reverse string is :%s",strrev(str));
                        
            }

                                    /* end for reverse string*/
                                            /************************************/
                                   /*   for  comparing two string*/

void compare()
        {
            char str1[20],str2[20];
                printf("enter 1st string:");
                gets(str1);

                    printf("enter 2nd string:");
                    gets(str2);

                        if(strcmp(str1,str2)==0)
                            {
                                printf("string are equal");
                            }
                                else
                                    {
                                        printf("string is not equal");
                                    }
       }

                                     /* end for comparing two string*/        
                                    /************************************/
                                   /*  for MEASURING LENGTH*/

 void str_length()
        {
            char ch[50];
                 //int word;
                     printf("Enter a word you want lenght =");
                         scanf("%s",&ch);
                             //word = ch;
                                printf("Length of the string = %d",strlen(ch));
        }

int main()
{
                int x;
          
                    printf("\n ENTER YOUR CHOICE \n\n 1) FACTORIAL \n 2) CALCULATOR \n 3) SIMPLE INTREST \n 4) COMPOUND INTREST \n 5) COS ANGLE \n 6) QUADRATIC EQUATION \n 7) ADDITION OF TWO MATRIX \n 8) SUBSTRACTION OF TWO MATRIX \n 9) MULTIPLICATION OF TWO MATRIX \n 10) DIVISION OF TWO MATRIX \n ");
                    printf("11) TRANSPOSE A MATRIX \n 12) AREA & PERIMETER OF RECTANGLE \n 13) AREA & PERIMETER OF CIRCLE \n 14) AREA & PERIMETER OF TRIANGLE \n 15) AREA & PERIMETER OF SQUARE \n 16) REVERSE A INTEGER \n 17) CELSIUS TO FAHRENHEIT \n 18) FAHRENHEIT TO CELSIUS \n 19) SEQUENCE OF WORDS \n 20) GCD_LCM \n ");
                    printf("21) MAKING PRODUCT DETAILS \n 22) PRINTING PATTERN IN HALF PYRAMID SHAPE (NUMBER'S) \n 23) PRINTING PATTERN IN HALF PYRAMID SHAPE (ALPHABET'S) \n 24) PRINTING PATTERN IN HALF PYRAMID SHAPE (* 'S) \n 25) CHECK STRING WETHER IT'S PALINDROME OR NOT \n 26) CONVERT UPPER CASE TO LOWER CASE \n 27) CONVERT LOWER CASE TO UPPER CASE \n 28) REVERSE A STRING \n 29) COMPARING TWO STRING \n 30) MEASURE LENGTH OF STRING \n");
                    scanf("%d",&x);
                
                if(x==1)
                    {
                        factorial();
                    }

                else if(x==2)
                    { 
                        fun(); 
                    }          

                else if(x==3)
                    {
                        si();
                    }
                
                else if(x==4)
                    {
                        ci();
                    }
                
                else if(x==5)
                    {
                        angle();
                    }
                
                else if(x==6)
                    {
                        qe();
                    }
                        
                else if(x==7)
                    {
                        add_matrix();
                    }
                            
                else if(x==8)
                    {
                        sub_matrix();
                    }
                                
                else if(x==9)
                    {
                        mul_matrix();
                    }
                
                else if(x==10)
                    {
                        div_matrix();
                    }
                    
                else if(x==11)
                    {
                        transpose_matrix();
                    }
                
                else if(x==12)
                    {
                        ar_peri_rect();
                    }    

                else if(x==13)
                    {
                        ar_peri_circle();
                    }
                
                else if(x==14)
                    {
                        ar_peri_triangle();
                    }        

                else if(x==15)
                    {
                        ar_peri_square();
                    }

                else if(x==16)
                    {
                        rev_number();
                    }

                else if(x==17)
                    {
                        c_f();
                    }

                else if(x==18)
                    {
                        f_c();
                    }   

                else if(x==19)
                    {
                        lexical_word_order();
                    }     

                else if(x==20)
                    {
                        gcd_lcm();
                    }       

                else if(x==21)
                    {
                        pro_struct_details();
                    }      

                else if(x==22)
                    {
                        num();
                    }        

                else if(x==23)
                    {
                        abc();
                    }       

                else if(x==24)
                    {
                        star();
                    }   

                else if(x==25)
                    {
                        palindrome();
                    }
                
                else if(x==26)
                    {
                        uppcase_lowcase();
                    }

                else if(x==27)
                    {
                         lowcase_uppcase();
                         
                    }

                else if(x==28)
                    {
                        reverse_chars();
                    }  

                else if(x==29)
                    {
                        compare();
                    }

                else if(x==30)
                    {
                        str_length();
                    }      
            return 0;
}