//--> Програма, която изписва ASCII кода на буквите от A до Z и от a до z -->3.1
#include<stdio.h>
int main()
{
    char ch, ch_sm;
    for(ch='A'; ch<='Z'; ch++)
    {
        printf("Letter: %c | ASCII code: %d\n",ch,ch);
    }
    for (ch_sm='a';ch_sm<='z';ch_sm++)
    {
        printf("\nLetter: %c | ASCII code: %d",ch_sm,ch_sm);
    }
    return 0;
}