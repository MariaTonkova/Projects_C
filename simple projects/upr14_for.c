//Програма, която изписва числата, които се делят точно на 17 между 17 и 100 -->2.4
#include <stdio.h>
int main()
{
    int i, del;
    for (i=17; i<101; i++)
    {
        if (i%17==0)
        {
            printf("%d\n", i);
        }
    }
return 0;
}