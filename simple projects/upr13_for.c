#include <stdio.h>
int main()
{/* Проверява дали едно число е просто -->пример от 2.4
    int num, i, ispr;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i=2; i<=num/2; i++)
    {
        if (num%i==0){
            ispr=0;
        }
    }
    if(ispr==0)
    {
        printf("The number is not prime");
    }
    else{
        printf("The number is prime");
    }
    return 0;*/
    
    // програма, която изписва числата от 1 до 100 --> 2.4
    int i;
    for (i=1; i<101; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}