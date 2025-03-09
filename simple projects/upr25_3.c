//-->Програма, която изчислява площ на фигури -->3.2
#include <stdio.h>
int main()
{
    int choice;
    printf("Enter a figure to calculate its area (circle (1), rectangle (2), triangle (3)): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        float r;
        printf("Enter the radius of the circle: ");
        scanf("%f", &r);
        printf("The area of the circle is: %.2f", 2*3.14*r*r);
    }
    else if (choice==2){
        int a,b;
        printf("Enter the sides of the recatngle\n");
        printf("Side 1: ");
        scanf("%d", &a);
        printf("Side 2: ");
        scanf("%d", &b);
        printf("The area of the rectandle is: %d", a*b);
    }
    else if(choice==3){
        int a,b;
        printf("Enter two sides of the triangle (except hypotenuse)\n");
        printf("Side 1: ");
        scanf("%d", &a);
        printf("Side 2: ");
        scanf("%d", &b);
        printf("The area of the rectangle is: %d", (a*b)/2);
    }
    else{
        printf("Error");
    }
    return 0;
}