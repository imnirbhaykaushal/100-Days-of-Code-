/* Q64: Find the digit that occurs the most times in an integer. */

#include <stdio.h>

int main()
{
    long long n;
    int count[10] = {0};
    int digit, i, max;

    scanf("%lld", &n);

    while(n != 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    max = 0;

    for(i = 1; i < 10; i++)
    {
        if(count[i] > count[max])
            max = i;
    }

    printf("%d\n", max);

    return 0;
}
