//Write a program that reads two foats (such as a and b) and displays the solution of
//the equation a*x + b = 0. In other words, i need to find x.
#include <stdio.h>
int main()
{
    double a, b;
    printf("Enter numbers: ");
    scanf("%lf%lf", &a, &b);
    if(a == 0)
    {
        if(b == 0)
            printf("Infinite solutions\n");//infinity(0/0)
        else
            printf("There is no solution !!!\n");//undefined(something by 0).
    }
    else
        printf(" The solution is %f", -b/a);//x=-b/a
    return 0;
}
