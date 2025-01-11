/*The following program reads an integer and displays a message according to the value
of that integer:*/
#include <stdio.h>
    int main()

{
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    if(a == 1)
        printf("One\n");
    else if(a == 2)
        printf("Two\n");
    else
        printf("Something else\n");
    printf("End\n");
    return 0;
}
