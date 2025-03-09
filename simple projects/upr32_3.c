//Програма, която връща точки по ASCII кода на буква
#include <stdio.h>
int main()
{
    char ch;
    int i;
    printf("Enter 10 letters: \n");
    for (i=1;i<11;i++)
    {
        printf("\nLetter %d: ",i);
        ch=getchar();
        getchar();
        for (;ch;ch--)
        {
            printf("%c", '.');
        }
    }
    return 0;
}