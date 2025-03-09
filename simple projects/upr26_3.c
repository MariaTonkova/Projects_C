//Програма, изчисляваща времето за път, при дадени разстояние и средна скорост-->3.3
#include <stdio.h>
int main()
{
    int s, v, t, n;
    printf("Enter the number of computations: ");
    scanf("%d", &n);
    for (;n;n--)
    {
        printf("Enter the distance (km): ");
        scanf("%d", &s);
        printf("Enter the velocity (km/h): ");
        scanf("%d",&v);
        printf("The time is: %d h\n", s/v);
    }
    return 0;
}

/*int main()     -->3.4 същата програма, но с while
{
    int s, v,t,n;
    printf("Enter the number of computations");
    scanf("%d", &n);
    while (n!=0)
    {   
        n--;
        printf("Enter the distance (km): ");
        scanf("%d", &s);
        printf("Enter the velocity (km/h): ");
        scanf("%d",&v);
        printf("The time is: %d h\n", s/v);
    }
    return 0;
}*/