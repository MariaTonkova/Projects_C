#include <stdio.h>
#include<conio.h>
void ex1(){
    char ch;
    while(ch!='\r'){
    printf("\nEnter character (To stop -> press 'Enter'): ");
    ch=getche();
    if(ch=='\r'){
        printf("\n");
        break;
    }
    printf("\n%c", ch-32);
    }
    }
    void ex2(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num>0){
        printf("The number is greater than 0");
    }
    if(num==0){
        printf("The number is 0");
    }
    if(num<0){
        printf("The number is smaller than zero");
    }
    }
int main(){
    int choice;
    printf("There are 2 tasks. Choose which task you want to see.\n");
    while(1){
        printf("Task (1 or 2) To stop the program->enter 0: ");
        scanf("%d", &choice);
        switch(choice){
            case (1):
            printf("Task 1\nConvert to capital letters\n");
            ex1();
            break;
            case (2):
            printf("Task 2\nCheck the numbers\n");
            ex2();
            break;
            case(0):
            break;
            default:
            printf("Wrong number.");
        }
        if (choice==0){
            break;
        }
    }

    return 0;
}