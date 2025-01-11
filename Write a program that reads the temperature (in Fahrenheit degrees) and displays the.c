/*
Write a program that reads the temperature (in Fahrenheit degrees) and displays the
corresponding description, as follows:
(a) <=32: Intense cold
(b) (32–59]: Cold
(c) (59–77]: Warm
(d) (77–95]: Heat
(e) >95: Intense heat

*/
#include <stdio.h>
int main()
{
    double i;
    printf("Enter Fahrenheit degrees: ");
    scanf("%lf", &i);
    if(i > 95)
        printf("Intense heat\n");
    else if(i > 77) /* Since the previous if checks values greater than
95, this else-if statement is equivalent to: else if(i > 77 && i
<= 95). */
        printf("Heat\n");
    else if(i > 59)
        printf("Warm\n");
    else if(i > 32)
        printf("Cold\n");
    else /* corresponds to degrees <= 32 */
        printf("Intense cold\n");
    return 0;
}
