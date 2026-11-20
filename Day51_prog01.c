/* Q101: Write a program to take a sorted array and an integer target
   as input. The elements in the sorted array might be repeated.
   Print the index of the first and last occurrence of the target.
   Print -1,-1 if the target is not present.
*/

#include <stdio.h>

int main()
{
    int a[100], n, target, i;
    int first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(a[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("%d,%d\n", first, last);

    return 0;
}
