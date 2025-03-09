//Преброяваща програма, която като стигне до 0 издава звук -->3.3
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any integer number: ");
    scanf("%d", &n);
    for (;n;n--);
    printf("\a");
    return 0;
}