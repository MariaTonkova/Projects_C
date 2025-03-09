/*Ако дадена функция не задава изрично тип на връщаната стойност, по подразбиране тя се приема за int
func(void)
{
    return 10;
}       за да се избегнат недоразумения се задава тип (напр. int)*/

//програма конвертираща долари в лири --1.8
#include <stdio.h>
float convert();
int main()
{
    float res = convert();
    printf("%.2f pounds.", res);
    return 0;
}
float convert()
{
    float dol;
    printf("Dollars: ");
    scanf("%f",&dol);
    float lira;
    lira = dol/2;
    return lira;
}