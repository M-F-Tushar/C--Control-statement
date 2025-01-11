#include <stdio.h>
int main()
{
    float a = 3.1;
    if(a == 3.1)
        printf("Yes ");
    else
        printf("No ");
    printf("%.9f\n", a-3.1);
    // using a foating-point number in mathematical
//expressions it is safer to use the double type.



    double b = 3.1;
    if(b == 3.1)
        printf("Yes ");
    else
        printf("No ");
    printf("%.9lf\n", b-3.1);
    return 0;
}
