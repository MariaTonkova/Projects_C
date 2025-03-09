//Програма, която определя дали въведеното число от потребителя е четно или нечетно.
#include <stdio.h>
int main()
{
    int num;
    printf ("Please enter a number: ");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("Your number is even.");
    }
    else
    {
        printf("Your number is odd.");
    }
    return 0;
}
/*if конструкция може да се пише и така:
if (sth) printf(sth);
разликата е, че когато се изписва на един ред връща само една стойност; изпизването на два реда с {} е препоръчително,
за да може да се контролира кода и да не доведе до грешки. */