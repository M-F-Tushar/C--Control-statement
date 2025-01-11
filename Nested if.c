#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30;
    if(a > 5)
    {
        if(b == 20) /* nested if statement. */
            printf("1 ");//will be executed.
        if(c == 40) /* nested if statement. */
            printf("2 ");// won't be executed, because condition is false.
        else
            printf("3 ");//will be executed.
    }
    else
        printf("4\n");//won't be executed, because if condition is true.
    return 0;
}
