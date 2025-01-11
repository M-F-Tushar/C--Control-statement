#include <stdio.h>
int main()
{
    int a, b;
    a = b = 9;
    if(++a == b++)
        printf("One\n");
    else
        printf("Two\n");
    printf("%d %d\n", a, b);
    return 0;
}
