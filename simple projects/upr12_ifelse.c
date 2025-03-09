//програма, която събира или извжда числа -->2.3
#include <stdio.h>
int main()
{
    int ch, n1, n2;
    printf("1. addition   2. subtraction\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf ("%d", &n2);
    if (ch==1)
    {
        printf("The sum of the numbers is: %d",n1+n2 );
    }
    else 
    {
        printf("The subtraction of the numbers is: %d", n1-n2);
    }
    return 0;
}