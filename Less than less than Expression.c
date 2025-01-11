#include<stdio.h>
int main()
{
    int a = 5, b = 7, c = 3;

    if(a<b<c)//In normal math answer would have been false,because (5<7>3), means condition is false. But here a<b means 1 or true and 1 is less than 3.
        printf("One\n");
    else
        printf("two");

    if(a<b && b<c)//To compare b against a and c, we would use the operator &&
        printf("One\n");
    else
        printf("two");
    return 0;
}
