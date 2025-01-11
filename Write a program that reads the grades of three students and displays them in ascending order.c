//Write a program that reads the grades of three students and displays them in ascending order (Smallest to largest).
/*
We first compare each grade with the other two in order to find and display the smallest one. Next, we compare the two remaining grades and display
them in ascending order.
*/
#include <stdio.h>
int main()
{
    float i, j, k;
    printf("Enter grades: ");
    scanf("%f%f%f", &i, &j, &k);
    if(i <= j && i <= k)//Checking if i is smallest.
    {
        printf("%f ", i);
        if(j < k)
            printf("%f %f\n", j, k);
        else
            printf("%f %f\n", k, j);
    }
    else if(j <= i && j <= k)// Checking j is smallest.
    {
        printf("%f ", j);
        if(i < k)
            printf("%f %f\n", i, k);
        else
            printf("%f %f\n", k, i);
    }
    else// Checking k is smallest.
    {
        printf("%f ", k);
        if(j < i)
            printf("%f %f\n", j, i);
        else
            printf("%f %f\n", i, j);
    }
    return 0;
}
