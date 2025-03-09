#include <stdio.h>
int main()
{
    //zad1                            за коментар на един или повече редове: /*  */
    float l, w, h;
    printf("Enter the length of the cube: ");
    scanf("%f", &l);
    printf("Enter the width of the cube: ");
    scanf("%f", &w);
    printf("Enter the height of the cube: ");
    scanf("%f", &h);
    float vol = l*w*h;
    printf("The volume of the cube is: %f", vol);
    //zad2
    int sec_per_year = 365*24*60*60;
    printf("The year have %d second.", sec_per_year);
    return 0;
}