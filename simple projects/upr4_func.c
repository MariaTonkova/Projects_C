#include <stdio.h>
void func(void);        //прототип на функция -> не работи програмата без него.
int main()
{
    printf("The summer soldier, ");
    func();
    return 0;
}
void func(void)
{
    printf("the sunshine patriot.");
}
