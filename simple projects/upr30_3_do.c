#include<stdio.h>
void zad1();
void zad2();
int main()
{
    int ch;
    do{
    printf("\nChoose task (1 or 2). For stop -->0: ");
    scanf("%d", &ch);
    if(ch==0){
        break;
    }
    if (ch==1)
    {
        zad1();
    }
    else{
        zad2();
    }
    }while(ch);
    return 0;
}
void zad1()
{//Програма, която превръща галоните в литри -->3.5
    float litri = 3.7854;
    int galon;
    printf("Converter between galoons and litters -> for stop enter 0");
    do{
        printf("\nGaloons: ");
        scanf("%d", &galon);
        printf("Litters: %f", galon*litri);
    }while(galon!=0);
}
void zad2()
{//Меню
    int choice;
    do{
    printf("\n  Mailing list menu: \n1. Enter addresses\n2. Delete addresses\n3. Search the list\n4. Print the list \
    \n5. Quit\nEnter the number of your choice: ");
    scanf("%d", &choice);
    if (choice ==1)
    {
        printf("\nYour selection: 1. Enter addresses\n");
    }
    else if(choice==2)
    {
        printf("\nYour selection: 2. Delete addresses\n");
    }
    else if (choice==3){
        printf("\nYour selection: 3. Search the list\n");
    }
    else if(choice==4){
        printf("\nYour selection: 4. Print the list\n");
    }
    if (choice==5){
        printf("\nYour selection: 5. Quit");
        break;
    }
    }while(choice==1 || choice==2|| choice==3|| choice==4||choice==5);
}