//zad 2 --> Програма, която превръща унции в чаши 1.10
#include <stdio.h>
void o_to_c(int uncii);
int main()
{
    o_to_c(20);
    return 0;
}
void o_to_c(int uncii)
{
    float cups = uncii/8.00;     //може да се използва и int
    printf("%d uncii are %.2f cups.",uncii,cups);
}