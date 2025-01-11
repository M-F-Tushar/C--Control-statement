/*
Write a program that reads three integers. If the sum of any two of them is equal to
the third one, it should display the integers within [0, 10]. Otherwise, the program
should read another three integers and display how many of them are multiples of 6.
*/
#include <stdio.h>
int main()
{
    int i, j, k, cnt;
    printf("Enter numbers: ");
    scanf("%d%d%d", &i, &j, &k);// Taking three integer.
    if((i+j == k) || (j+k == i) || (i+k == j))//if any two number equal to one
    {
        if(i >= 0 && i <= 10)// Displaying integer from 0 to 10
            printf("%d\n", i);
        if(j >= 0 && j <= 10)
            printf("%d\n", j);
        if(k >= 0 && k <= 10)
            printf("%d\n", k);
    }
    else
    {
        printf("Enter numbers: ");
        scanf("%d%d%d", &i, &j, &k);
        cnt = 0;
        if(i%6 == 0)// Checking if any of are multiples of 6.
            cnt++;
        if(j%6 == 0)
            cnt++;
        if(k%6 == 0)
            cnt++;
        printf("%d\n", cnt);
    }
    return 0;
}
