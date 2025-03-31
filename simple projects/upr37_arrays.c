#include<stdio.h>
int main(){
    // Програма, която проверява дали едно число в масив се дублира
    int numbers[10], i, match;
    for (i =0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    printf("The array is: \n");
    for(i=0; i<10;i++){
        printf("%d   ", numbers[i]);
    }
    for (i=0; i<10; i++){
        match=numbers[i];
        for (int j=i+1;j<10;j++){
            if(match==numbers[j]){
                printf("\n%d is dublicated", match);
            }
        }
    }
    return 0;
}