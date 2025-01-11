//Write a program that reads the prices of four products and displays the largest one.
#include <stdio.h>
int main()
{
    double i, j, k, m, max;
    printf("Enter prices: ");
    scanf("%lf%lf%lf%lf", &i, &j, &k, &m);
// One way
    if(i > j && i > k && i > m)
        printf("%lf is largest",i);
    if(j > i && j > k && j > m)
        printf("%lf is largest",j);
    if(k > j && k > i && k > m)
        printf("%lf is largest",k);
    if(m > j && m > k && m > i)
        printf("%lf is largest",m);

        printf("\n");
// Another way.
    if(i > j)
        max = i;
    else
        max = j;
    if(k > max)
        max = k;
    if(m > max)
        max = m;
    printf("Max = %f\n", max);



    return 0;
}
