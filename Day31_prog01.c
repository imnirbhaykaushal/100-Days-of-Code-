/* Q61: Search for an element in an array using linear search. */

#include <stdio.h>

int main()
{
    int a[100], n, i, key, position = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            position = i;
            break;
        }
    }

    if(position != -1)
        printf("Found at index %d\n", position);
    else
        printf("-1\n");

    return 0;
}
