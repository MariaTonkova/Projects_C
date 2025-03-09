#include <stdio.h>
int main()
{
    int i, j;
    i = 10;
    j=i++;
    printf("i and j: %d, %d", i,j);
    return 0;  //->принтира 11, 10   !!!
    /*ако е ++i, ще принтира 11, 11  !!!*/
}