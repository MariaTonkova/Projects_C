//Програма, декодираща съобщения (букви) -->3.4
#include <stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter message: ");
    ch=getche();
    while(ch!='\r')
    {
        printf("%c",ch-1);
        ch=getche();
    }
    return 0;
}