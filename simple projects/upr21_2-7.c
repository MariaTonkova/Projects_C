//Програма, която отпечатва числата от 1 до 100 в 5 колони
#include <stdio.h>
int main()
{
    for (int i=1; i<101; i++)
    {
        printf("%d\t",i);
        if (i%5==0){
            printf("\n");
        }
    }
    return 0;
}