#include <stdio.h>
int main()
{
    float f1;
    float f2;
    printf("Enter a floating point num: ");
    scanf("%f", &f1);
    printf("Enter a floating piont num: ");
    scanf ("%f", &f2);
    float sum = f1+f2;
    printf("The sum of the floating point numbers is: %f", sum); // %.2f -> Връща стойност до 2 знак след десетичната запетая
    return 0;
}