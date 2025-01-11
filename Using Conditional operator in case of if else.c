#include <stdio.h>
int main()
{
    int a, b = 0;
    a = b ? 50 : 200;//The statement a = b ? 50 : 200; is equivalent to a = (b != 0) ? 50 : 200; Since b is 0, a becomes 200 and the program displays Val = 200.
    printf("Val = %d\n", a);
    return 0;
}
