/*
Suppose that two PCs reside in the same IP network. Write a program that reads their IP addresses (version 4) and displays if they are configured correctly, meaning
if they can communicate. The form of the IP address is x.x.x.x, where each x is an integer within [0, 255].
The value of the first byte of an IP address defines its class, as shown here:
(a) Class A: [0, 127]
(b) Class B: [128, 191]
(c) Class C: [192, 223]
If the two IP addresses indicate different classes, the PCs can’t communicate. If they belong to the same class, we compare their network byte(s). The byte(s) to be compared are defned according to their class, as follows:
(a) Class A: first byte
(b) Class B: first two bytes
(c) Class C: first three bytes
If they are the same, the PCs can communicate.
*/
#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, b1, b2, b3, b4;
    printf("Enter first IP address: ");
    scanf("%d.%d.%d.%d", &a1, &a2, &a3, &a4);
    printf("Enter second IP address: ");
    scanf("%d.%d.%d.%d", &b1, &b2, &b3, &b4);
    if(a1 < 128)
    {
        if(a1 == b1)
            printf("Class A: Correct Configuration\n");
        else
            printf("Class A: Wrong Configuration\n");
    }
    else if(a1 < 192)
    {
        if(a1 == b1 && a2 == b2)
            printf("Class B: Correct Configuration\n");
        else
            printf("Class B: Wrong Configuration\n");
    }
    else if(a1 < 224)
    {
        if(a1 == b1 && a2 == b2 && a3 == b3)
            printf("Class C: Correct Configuration\n");
        else
            printf("Class C: Wrong Configuration\n");
    }
    else
        printf("Error: Wrong class\n");
    return 0;
}
