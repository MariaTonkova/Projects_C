/*3.1
getchar() - връща стойност слад като се натисне Enter; stdio.h
getche() - връща стойност веднага; conio.h
Знаците мгат да се сравняват точна както се сравняват числа*/
#include <stdio.h>
int main(){
    char ch, m_ch;
    int i;
    m_ch='z';
    printf("Enter 10 letters\n");
    for (i=0; i<10; i++)
    {
        printf("Letter: ");
        ch=getchar();
        getchar(); //-->маха празното пространство, за да не пречи
        if (ch<m_ch){
            m_ch=ch;
        }
    }
    printf("The first letter in alphabetic order is %c\n", m_ch);//-->без \n не работи!!!
    return 0;
}