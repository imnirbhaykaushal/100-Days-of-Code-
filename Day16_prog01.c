/*Q31: Write a program to print the binary representation of a given number.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
5
Output 2:
101

*/

#include <stdio.h>

int main()
{
    int n, binary = 0, place = 1, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary = %d\n", binary);

    return 0;
}