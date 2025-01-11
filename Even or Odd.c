#include<stdio.h>
int main()
{
    int num;

    printf("Enter any number : ");
    scanf("%d",num);

    if(num%2==0)
        printf("Even");
    else if(num=0)
        printf("Spacial Number");
    else
        printf("Odd");

    return 0;
}
