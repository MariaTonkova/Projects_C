//Програма, която изчислява квадратурата на къща
#include<stdio.h>
int main(){ 
    int i, rooms;
    float q,n;
    printf("Enter the number of the rooms: ");
    scanf("%d", &rooms);
    n=0;
    for (i=1;i<=rooms;i++){
        printf("Room %d quadrature: ",i);
        scanf("%f",&q);
        n=n+q;
    }
    printf("The house is: %.2f m^2", n);
    return 0;
}