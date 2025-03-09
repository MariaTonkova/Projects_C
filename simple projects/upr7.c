// zad 1 Програма, която изчислява теглото на човек на луната -->1.10
#include <stdio.h>
int main()
{
    float weight, onEarth, g_moon, onMoon;
    printf("Enter your wieght (kg): ");
    scanf("%f", &weight);
    onEarth = weight*9.8;
    printf("Your weight on Earth is %.2f N.\n",onEarth);
    g_moon = 17.00/100*9.8;
    onMoon = g_moon*weight;
    printf("Your weight on Moon is %.2f N.", onMoon);   //за изчизляване на теглото: теглото умножено по 0,17 - отговор от книгата!!
    return 0;
}