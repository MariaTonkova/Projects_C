//Програма, която брои въведените от потребителя пунктуационни знаци, цифри и букви. Спира прио натискането на ENTER
#include <stdio.h>
#include <conio.h>
int main(){
    char f;
    int punct=0, letter=0, nums=0;
    while(f!='\r'){
    f=getche();
    switch(f){
        case (','):
        case ('.'):
        case (';'):
        case ('?'):
        case ('/'):
        case ('!'):
        case (':'):
        case ('-'):
        punct++;
        break;
        case ('1'):
        case ('2'):
        case ('3'):
        case ('4'):
        case ('5'):
        case ('6'):
        case ('7'):
        case ('8'):
        case ('9'):
        case ('0'):
        nums++;
        break;
        case(' '):
        case('\r'):
        break;
        default: 
        letter++;
    }
    }
    printf("\nThe number of punctuation marks is: %d",punct);
    printf("\nThe number of numbers is: %d", nums);
    printf("\nThe number of letters is: %d", letter);
return 0;
}