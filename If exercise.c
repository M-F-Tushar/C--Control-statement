#include <stdio.h>
int main()
{
    int i = 10, j = 20, k = 0;
    if(i = 40)
        printf("One ");
    if(j = 50)
        printf("Two ");
    if(k = 60)
        printf("Three ");
    if(k = 0)// This condition is false, because 0 is assign to k. And 0 means false.
        printf("This is the end… ");
    printf("%d %d %d\n", i, j, k);
    return 0;
}
