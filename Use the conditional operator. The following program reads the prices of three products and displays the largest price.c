/*The following program reads the prices of three products and displays the largest
price. Use the conditional operator ?: to replace the if-else statements with a
single printf() to display the largest price.

#include <stdio.h>
int main()
{
    /float i, j, k;
    printf("Enter prices: ");
    scanf("%f%f%f", &i, &j, &k);
    if(i >= j && i >= k)
        printf("Max = %f\n", i);
    else if(j >= i && j >= k)
        printf("Max = %f\n", j);
    else
        printf("Max = %f\n", k);
    return 0;
}
*/
#include <stdio.h>
int main()
{
    float i, j, k;
    printf("Enter prices: ");
    scanf("%f%f%f", &i, &j, &k);
    printf("Max = %f\n", (i >= j && i >= k) ? i : (j >= i && j >= k) ? j : k);

    return 0;
}
