#include <stdio.h>
void zad1 ();
void zad2();

int main()
{
    int n;
    printf("Enter which task you want to see (There are two): ");
    scanf("%d",&n);
    if(n==1){
        printf("You chose task number 1.\n");
        zad1();
    }
    if (n==2)
    {
        printf("You chose task number 2.\n");
        zad2();
    }
    return 0;
}
void zad1 ()
{//Програма, която печата числата от -100 до 100 -->3
        int i;
    for (i=-100; i<101; i++)
    {
        printf ("%d  ", i);
        // if (i%10==0){
        //     printf("\n");
        // }   --> малко по-добра подредба на числата
    }
}
void zad2()
{//Програма, която изписва пословици -->3
    int choice;
    printf ("Enter choice (1-5) for proverb: ");
    scanf("%d", &choice);
    if (choice==1)
    {
        printf("Practice makes perfect.");
    }
    if (choice==2)
    {
        printf("Better late than never.");
    }
    if (choice ==3)
    {
        printf("Do not judge a book by it's cover.");
    }
    if (choice==4)
    {
        printf("It takes two to tango.");
    }
    if (choice==5)
    {
        printf("Actions speak louder than words.");
    }
    if (choice>5 || choice<1){
        printf("The number should be between 1 and 5. The program has been closed.\nStart the program again.");
    }
}