/* Q77: Check if elements on the diagonal of a matrix are distinct. */

#include <stdio.h>

int main()
{
    int a[10][10], rows, cols, i, j;
    int distinct = 1;

    scanf("%d%d", &rows, &cols);

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < rows; i++)
    {
        for(j = i + 1; j < rows; j++)
        {
            if(a[i][i] == a[j][j])
                distinct = 0;
        }
    }

    if(distinct == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
