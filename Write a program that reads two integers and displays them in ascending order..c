#include <stdio.h>
int main()
{
    float i, j;
    printf("Enter grades: ");
    scanf("%f%f", &i, &j);
    if(i < j)
        printf("%f %f\n", i, j);
    else
        printf("%f %f\n", j, i);
    return 0;
}
