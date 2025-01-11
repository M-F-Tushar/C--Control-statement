#include<stdio.h>
int main()
{
    int a;
    printf("Enter number : ");
    scanf("%d", &a);

    switch(a)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    default:
        printf("Something else\n");
        break;
    }
    printf("End\n");
    return 0;
}
