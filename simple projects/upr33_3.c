//Програма, която изчислява бакшиш-->3.7
#include <stdio.h>
int main()
{
    
    float j;
    char ch;
    printf("Tip program\n");
    for (j=1.00; j<=100.00; j+=1.00)
    {
        printf("Bill: %.2f|Tip 10:  %.2f|Tip 15:  %.2f|Tip 20: %.2f", j,j+j*0.1, j+j*0.15, j+j*0.2);
        printf("\nDo you want to continue y|n: ");
        ch=getchar();
        getchar();
        if (ch=='n')
        {
            break;
        }
    }
    return 0;
}