/* Q76: Check if a matrix is symmetric. */

#include <stdio.h>

int main()
{
    int a[10][10], rows, cols, i, j;
    int symmetric = 1;

    scanf("%d%d", &rows, &cols);

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    if(rows != cols)
        symmetric = 0;
    else
    {
        for(i = 0; i < rows; i++)
        {
            for(j = 0; j < cols; j++)
            {
                if(a[i][j] != a[j][i])
                    symmetric = 0;
            }
        }
    }

    if(symmetric == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
