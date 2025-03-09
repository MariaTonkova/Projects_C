//програма, която изписва целочислен аргумент --1.9
#include <stdio.h>
void outnum(int x);
int main()
{
    outnum(142);
    return 0;
}
void outnum(int x)
{
    printf("%d", x);
}