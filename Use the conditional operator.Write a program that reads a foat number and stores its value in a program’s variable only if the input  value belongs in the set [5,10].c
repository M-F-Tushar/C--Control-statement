/*
Write a program that reads a float number and stores its value in a program’s variable only if the input value belongs in the set [5,10]. Otherwise, the variable should be set
to −1.Use the conditional operator.
*/
#include <stdio.h>
int main()
{
    float i, num;
    printf("Enter grade: ");
    scanf("%f", &num);
    i = (num >= 5 && num <= 10) ? num : −1;// If num is 5 to 10 then value will be printed otherwise it will be -1
    printf("%f\n", i);
    return 0;
}
