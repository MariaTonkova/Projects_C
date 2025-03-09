//Програма отпечатваща таблица с числа
#include <stdio.h>
int main()
{
    int i =1;
    for (i; i<11; i++)
    {
        printf("%d | %d | %d\n",i, i*i, i*i*i);
    } 
    return 0;
}