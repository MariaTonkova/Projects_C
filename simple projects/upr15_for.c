//Програма, която проверява дали едно число е просто и да изписва делителите на чилсото -->2.4
#include <stdio.h>
int main()
{
    int i, num, pr=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i=2; i<=num/2; i++)
    {
        if (num%i==0)
        {
            pr=0;
            printf("%d ",i);
        }
    }
    if (pr==0){
        printf("\nThe number is not prime");
    }
    else{
        printf("\nThe number is prime");
        
    }
    return 0;
}