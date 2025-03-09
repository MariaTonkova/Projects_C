//програма, която извжда числата от въведеното до нула и след изпълнението на програмата се издава звук от говорителя
#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter an integer number to start the countdown: ");
    scanf ("%d", &num);
    for (num; num>-1; num--)
    {
        printf("%d\n", num);
    }
    printf("\a");      //--> тази част от кода издава звук
    return 0;
}