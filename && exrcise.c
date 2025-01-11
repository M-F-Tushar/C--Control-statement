#include<stdio.h>
int main()
{
    int a = 10, b = 20;
    if(a && a/b)// This condition is false, because a/b is 0 not 0.5 which is a float.
        printf("One\n");
    else
        printf("Two\n");
    return 0;
}
