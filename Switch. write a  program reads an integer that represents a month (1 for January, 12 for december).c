//Write a program reads an integer that represents a month (1 for January, 12 for December) and displays the season in which the month belongs
#include <stdio.h>
int main()
{
    int month;
    printf("Enter month [1-12]: ");
    scanf("%d", &month);
    switch(month)
    {
    case 1:
    case 2:
    case 12:
        printf("Winter\n"); /* The merging of the three cases means that if
the input value is 1, 2, or 12, the message Winter will be
displayed.*/
        break;
    case 3:
    case 4:
    case 5:
        printf("Spring\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("Summer\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("Autumn\n");
        break;
    default:
        printf("Error: Wrong month\n");
        break;
    }
    return 0;
}
