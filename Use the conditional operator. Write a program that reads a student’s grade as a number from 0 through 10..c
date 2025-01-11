/*
Write a program that reads a student’s grade as a number from 0 through 10, and displays a corresponding message, according to the following:
(a) Grade belongs to [7.5–10], the program prints "A"
(b) Grade belongs to [5–7.5), the program prints "B"
(c) Grade belongs to [0–5), the program prints "Better luck next time"
If the grade is not in [0–10], the program should display an informative message. Use
the conditional operator
*/
#include <stdio.h>
int main()
{
    float grd;
    printf("Enter grade: ");
    scanf("%f", &grd);
    printf("%s\n", (grd >= 7.5 && grd <= 10) ? "A" : (grd >= 5 && grd < 7.5) ? "B" : (grd >= 0 && grd < 5) ? "Better luck next time" : "Grade should be within [0−10]");
           return 0;
}
