//Програма, която събира или умножава две числа -->2.2
#include <stdio.h>
int main()
{
    int n1, n2, choice;
    printf("Enter the first number (integer): ");
    scanf("%d", &n1);
    printf("Enter the second number (integer): ");
    scanf("%d", &n2);
    printf("Choose what to do with the numbers (Enter 1 or 2): 1) addition or 2) multiplication: ");
    scanf("%d", &choice);
    if (choice==1)
    {
        printf("The sum of the two numbers is: %d", n1+n2);
    }
    else
    {
        printf("The multiplication os the two numbers is: %d", n1*n2);
    }
    return 0;
}