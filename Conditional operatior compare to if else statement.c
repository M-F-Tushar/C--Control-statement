// The following program reads an integer and if it is greater than 10 the program displays One, otherwise Two
#include <stdio.h>
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    (a > 10) ? printf("One\n") : printf("Two\n");// exp1 ? exp2 : exp;
    return 0;
}
/*
 Value of the conditional expression can be stored to a varible
 int a =5, k;
 k = (a>0) ? 100 : -1;

 The conditional operator is mostly used to replace simple if-else statement
 if(a > b)
    max = a;
    else
    max = b;

can be replaced with

max = (a>b) ? a : b ;
*/
