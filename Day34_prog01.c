/* Q67: Insert an element in an array at a given position. */

#include <stdio.h>

int main()
{
    int a[100], n, i, position, value;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d%d", &position, &value);

    for(i = n; i > position; i--)
        a[i] = a[i - 1];

    a[position] = value;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
