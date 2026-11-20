/* Q72: Find the sum of all elements in a matrix. */

#include <stdio.h>

int main()
{
    int a[10][10], rows, cols, i, j, sum = 0;

    scanf("%d%d", &rows, &cols);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
    }

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            sum = sum + a[i][j];
    }

    printf("%d\n", sum);

    return 0;
}
