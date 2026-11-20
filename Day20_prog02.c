/* Q40: Write a program to find the 1's complement of a binary number. */

#include <stdio.h>

int main()
{
    char binary[100];
    int i;

    printf("Enter binary number: ");
    scanf("%s", binary);

    for(i = 0; binary[i] != '\0'; i++)
    {
        if(binary[i] == '0')
            printf("1");
        else
            printf("0");
    }

    printf("\n");

    return 0;
}
