#include <stdio.h>
#include <math.h> /* Used for sqrt() */
int main()
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
                    printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
                    break;
            }
    }
    return 0;
}



