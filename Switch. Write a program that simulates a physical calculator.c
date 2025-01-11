/*Write a program that simulates a physical calculator. The program should take asinput the symbol of an arithmetic operator and two integers and display the result of
the arithmetic operation*/
#include <stdio.h>
int main()
{
    char sign;
    int i, j;
    printf("Enter math sign and two integers: ");
    scanf("%c%d%d", &sign, &i, &j);
    switch(sign)
    {
    case '+':
        printf("Sum = %d\n", i+j);
        break;
    case '−':
        printf("Sub = %d\n", i-j);
        break;
    case '*':
        printf("Product = %d\n", i*j);
        break;
    case '/':
        if(j != 0)
            printf("Div = %.3f\n", (float)i/j);
        else
            printf("Second num should not be 0\n");
        break;
    default:
        printf("Unacceptable operation\n");
        break;
    }
    return 0;
}
