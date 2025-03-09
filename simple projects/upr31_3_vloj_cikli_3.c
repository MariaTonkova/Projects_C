//Програма, която намира всички прости числа между 2 и 1000
#include<stdio.h>
int main()
{
    int i, j, prime;
    for (i=2;i<1001;i++)
    {
        prime = 1;
        for (j=2; j<=i/2; j++)
        {
            if (!(i%j))   /*същото като if (i%j==0)*/
            {
                prime = 0;
            }
        }
        if (prime){
            printf("%d is prime\n",i);
        }
    }
    return 0;
}