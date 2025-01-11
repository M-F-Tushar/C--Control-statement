/*Write a program that reads an integer and displays a message to indicate whether it
is positive or negative.  If the integer is 0, the program should display "Zero". Use the
conditional operator.*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    num > 0 ? printf("Positive\n") : (num < 0) ? printf("Negative\n") :
    printf("Zero\n");
    return 0;
}
