#include<stdio.h>
int main()
{
    int mark;

    printf("Enter mark : ");
    scanf("%d",&mark);

    if(mark>=33)
        printf("pass");
    else
        printf("fail");
}
