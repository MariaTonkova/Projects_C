//Програма, в която се играе играта "познай магическото число"-->2.7
#include <stdio.h>
int main()
{
    int num, i=1, in_n;
    num=2;
    printf ("Guess the magic number\n");
    for (i; i<11; i++)
    {
        printf ("Enter a number: ");
        scanf("%d", &in_n);
        if (in_n==num)
        {
            printf("RIGHT! You won!");
            printf ("Number of attempts: %d", i);
            break;
        }
        if (in_n<num)
        {
            printf("Wrong! The number is greater.\n");
        }
        if (in_n>num)
        {
            printf ("Wrong! The number is smaller.\n");
        }
        if (i==10)
        {
            printf ("Game over!");
        }
    }
    return 0;
}