#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num >= 0)
        printf("The absolute value is %d\n", num);
    else
        printf("The absolute value is %d\n", -num);
    return 0;
}
