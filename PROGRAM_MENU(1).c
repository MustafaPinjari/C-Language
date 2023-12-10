//CODE BY MUSTAFA❤️
//A MENU TO FIND???
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#define MAXSIZE 10
    
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
                    // adding two matrix 
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
                                    /* end for MEASURING LENGTH*/        
                                    /************************************/
                                   /*  for sum of even odd till 'n' terms */


int sum_even_odd_till_n_terms()
{
  int i, num, ES = 0, OS = 0;
 
  printf("\n enter the 'n' numbers : ");
  scanf("%d", &num);
  
  for(i = 1; i <= num; i++)
  {
  	if ( i%2 == 0 ) 
  	{
        ES = ES + i;
  	}
  	else
  	{
  		OS = OS + i;
	}
  }
printf("\n The Sum of Even Numbers upto %d  = %d", num, ES);
printf("\n The Sum of Odd Numbers upto %d  = %d", num, OS);
return 0;
}


                                         /* end for sum of even odd till 'n' terms*/        
                                    /************************************/
                                   /*  for vowels in a string */

int vowels()
{
  int c = 0, count = 0;
  char s[1000];

  printf("Input a string\n");
scanf("%s",&s);

  while (s[c] != '\0')
   {
    if (s[c] == 'a'||s[c] == 'A'||s[c] == 'e'||s[c] == 'E'||s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
  }

  printf("Number of vowels in the string: %d", count);

  return 0;
}

                                     /* end for vowels in a string */        
                                    /************************************/
                                   /*  for week day*/

 void WEEK()
 {
    int week;
        printf("\n enter a week number=");
            scanf("%d",&week);
            if(week==1)
                printf("it's monday");          
                if(week==2)               
                    printf("\n it's tuesday");               
                    if(week==3)                  
                        printf("\n it's wednesday");
                    
                     if(week==4)
                        
                            printf("\n it's thursday");
                        
                            if(week==5)
                            
                                printf("\n it's friday");
                            
                                if(week==6)
                                
                                    printf("\n it'saturday");
                                
                                    if(week==7)
                                    
                                        printf("it's sunday");
                                    
                                        else
                                        
                                            printf("\n you have enter invalid day number");
                                        
 }

                                 /* end for week day*/        
                                    /************************************/
                                   /*  for mean variance standard deviation*/


 void mean_variance_std_deviation()
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

                                    /* end for mean variance standard deviation*/              
                                    /************************************/
                                   /*  for PROFIT OR LOSS */

int PROFIT_OR_LOSS()
    {
        int cp,sp,profit,loss;
            printf("\n ENTER YOUR  SELLING PRICE   :");
                scanf("%d",&sp);
                    printf("\n ENTER YOUR COST PRICE :");
                        scanf("%d",&cp);

            if(cp<sp)
                 {
                     printf("\n  YOU ARE IN PROFIT DUDE!!");
                     profit=sp-cp;
                     printf("\n YOU ARE IN PROFIT OF  %d RUPEES",profit);  
                 }
                           else
                                 {
                                     printf("\n YOU ARE IN LOSS DUDE!!");
                                     loss=cp-sp;
                                     printf("\n YOU ARE IN LOSS OF %d RUPEES",loss);
                                  }
            return 0;
    }

                                    /* end for PROFIT OR LOSS */              
                                    /************************************/
                                   /*  for  plain text to cipher text */


int plaintext_to_ciphertext() 
    {
        char plainText[100], cipherText[100], val;
        int i = 0, key;

        /* get the plain text from the user */
        printf("Enter the plain text(all caps):");
        scanf("%s",&plainText[i]);//fgets(plainText, 100, stdin);

        /* key to convert plain text to cipher text */
        printf("Enter the key to create cipher text(1 - 5):");
        scanf("%d", &key);
        plainText[strlen(plainText) - 1] = '\0';

        /* converting plain text to cipher text */
        while (plainText[i] != '\0') 
        {
                if ((plainText[i] + key) > 'Z') 
                {
                        val = (plainText[i] + key) - 'Z';
                        cipherText[i] = 'A' + val - 1;
                } 
                else 
                {
                        cipherText[i] = plainText[i] + key;
                }
                i++;
        }

        cipherText[i] = '\0';

        printf("Resultant Cipher Text: %s\n", cipherText);
        i = 0;

        /* converting cipher text to plain text */
        printf("Plain Text:");
        while (cipherText[i] != '\0') {
                if ((cipherText[i] - key) < 'A') {
                        printf("%c", 'Z' + 1 - ('A' - (cipherText[i] - key)));
                } else {
                        printf("%c", cipherText[i] - key);
                }
                i++;
        }
        printf("\n");
        return 0;
    }


                                     /* end for plain text to cipher text */              
                                    /************************************/
                                   /*  for  prime or not*/


int prime_or_not() 
{
    int num, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%d is a prime number.", num);
    } else {
        printf("%d is not a prime number.", num);
    }

    return 0;
}  

                                     /* end for prime or not*/              
                                    /************************************/
                                   /*  for  ARMSTRONG NUMBER*/

int ARMSTRONG_NUMBER() 
{
    int num, original, digits = 0, sum = 0;

    printf("Enter a number: ");
        scanf("%d", &num);

    original = num;

    while (original != 0) 
        {
            original /= 10;
            digits++;
        }

    original = num;

    while (original != 0) 
        {
            int digit = original % 10;
            sum += pow(digit, digits);
            original /= 10;
        }

    if (sum == num) 
        {
            printf("%d is an Armstrong number.", num);
        } 
            else 
            {
                printf("%d is not an Armstrong number.", num);
            }

    return 0;
}


                                            /* end for  ARMSTRONG NUMBER*/              
                                    /************************************/
                                   /*  for sorting number */
int sorting_number() 
{
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

                                            /* end for sorting number*/              
                                    /************************************/
                                   /*  for MONTH NUMBER */

int MONTH_NUMBER()
{
    int month;
        printf("Enter the number to know month ");
            scanf("%d",&month);
                if(month==1)
                    printf("Its January");
                        else if(month==2)
                            printf("its February");
                                else if(month==3)
                                    printf("its March");
                                        else if(month==4)
                                             printf("its April");
                                                else if(month==5)
                                                    printf("its May");
                                                        else if(month==6)
                                                             printf("its June");
                                                              else if(month==7)
                                                                  printf("its July");
                                                                    else if(month==8)
                                                                        printf("its August");
                                                                            else if(month==9)
                                                                                printf("its September");
                                                                                    else if(month==10)
                                                                                         printf("its October");
                                                                                            else if(month==11)
                                                                                                printf("its November");
                                                                                                    else if(month==12)
                                                                                                        printf("its December");
                                                                                                            else
                                                                                                                printf("Invalid number for month no month exist with given number");

                                                                                                                                         return 0;                       

}

void std_struct()
    
    {
        struct student
{
    int std_prn;
    char std_name[30];
    float std_percent;
};
        struct student s1,s2;
        int i,j;
        
            printf("\n ENTER PRN OF STUDENT  :");
            scanf("%d",&s1.std_prn);
            
            printf("\n ENTER NAME OF STUDENT  :");
            scanf("%s",&s1.std_name); 
            
            printf("\n ENTER PERCENTAGE OF STUDENT  :");
            scanf("%f",&s1.std_percent);
            
            printf("\nENTER PRN OF STUDENT  :");
            scanf("%d",&s2.std_prn);
            
            printf("\nENTER NAME OF STUDENT  :");
            scanf("%s",&s2.std_name); 
            
            printf("\nENTER PERCENTAGE OF STUDENT  :");
            scanf("%f",&s2.std_percent);   
            
            for(i=0;i<2;i++)
            {
                printf("\n \n");
                for(j=0;j<=69;j++)
                {
                   
                 printf("-X",i,j);
                }
            
            }
            printf("\n\n \t \t \n \n DETAIL YOU ENTERED");
            printf("\t \t \n \n \t \tDETAILS OF FIRST STUDENT");
            printf("\n\n NAME :%s",s1.std_name);
            printf("\n\n PRN :%d",s1.std_prn);
            printf("\n\n PERCENTAGE :%f",s1.std_percent);
            printf("\t \t \n \n \t \tDETAILS OF SECOND STUDENTS");
            printf("\n \nNAME :%s",s2.std_name);
            printf("\n \nPRN :%d",s2.std_prn);
            printf("\n\nPERCENTAGE :%f",s2.std_percent);
    }
    
int main()
{
                int x;
          
                    printf("\n ENTER YOUR CHOICE \n\n 1) FACTORIAL \n 2) CALCULATOR \n 3) SIMPLE INTREST \n 4) COMPOUND INTREST \n 5) COS ANGLE \n 6) QUADRATIC EQUATION \n 7) ADDITION OF TWO MATRIX \n 8) SUBSTRACTION OF TWO MATRIX \n 9) MULTIPLICATION OF TWO MATRIX \n 10) DIVISION OF TWO MATRIX \n ");
                    printf("11) TRANSPOSE A MATRIX \n 12) AREA & PERIMETER OF RECTANGLE \n 13) AREA & PERIMETER OF CIRCLE \n 14) AREA & PERIMETER OF TRIANGLE \n 15) AREA & PERIMETER OF SQUARE \n 16) REVERSE A INTEGER \n 17) CELSIUS TO FAHRENHEIT \n 18) FAHRENHEIT TO CELSIUS \n 19) SEQUENCE OF WORDS \n 20) GCD_LCM \n ");
                    printf("21) MAKING PRODUCT DETAILS \n 22) PRINTING PATTERN IN HALF PYRAMID SHAPE (NUMBER'S) \n 23) PRINTING PATTERN IN HALF PYRAMID SHAPE (ALPHABET'S) \n 24) PRINTING PATTERN IN HALF PYRAMID SHAPE (* 'S) \n 25) CHECK STRING WETHER IT'S PALINDROME OR NOT \n 26) CONVERT UPPER CASE TO LOWER CASE \n 27) CONVERT LOWER CASE TO UPPER CASE \n 28) REVERSE A STRING \n 29) COMPARING TWO STRING \n 30) MEASURE LENGTH OF STRING \n ");
                    printf("31) SUM OF EVEN ODD TERMS TILL 'N' TERMS \n 32) VOWELS IN A STRING \n 33) WEEK DAY \n 34) MEAN , VARIANCE , STANDARD DEVIATION \n 35) PROFIT OR LOSS \n 36) PLAIN TEXT TO CIPHER TEXT \n 37) PRIME NUMBER OR NOT \n 38) ARMSTRONG NUMBER \n 39) SORTING NUMBERS \n 40) MONTH NUMBER \n ");                   
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

                else if (x==31)
                    {
                        sum_even_odd_till_n_terms();
                    } 

                else if(x==32)
                    {
                        vowels();
                    }  

                else if(x==33)
                    {
                        WEEK();
                    }
                
                else if(x==34)
                    {
                        mean_variance_std_deviation();
                    } 

                else if(x==35)
                    {
                         PROFIT_OR_LOSS();
                    }

                else if(x==36)
                    {
                        plaintext_to_ciphertext();
                    }  

                else if(x==37)
                    {
                         prime_or_not();
                    }

                else if(x==38) 
                    {
                        ARMSTRONG_NUMBER();
                    }   

                else if(x==39)
                    {
                        sorting_number();
                    }      

                else if(x==40)
                    {
                        MONTH_NUMBER();
                    }

                    else if(x==41)
                        {
                            std_struct();

                        }

            return 0;
}