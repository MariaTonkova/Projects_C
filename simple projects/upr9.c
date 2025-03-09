// Програма, която намира квадрата на въведено от потребителя число --> преговор на глава 1; началото на глава 2
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to find its square: ");
    scanf("%d", &n);
    int sq = n*n;
    printf("Answer: %d", sq);
    return 0;
}