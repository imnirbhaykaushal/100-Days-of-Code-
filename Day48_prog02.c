/* Q96: Reverse each word in a sentence without changing word order. */

#include <stdio.h>

int main()
{
    char str[200];
    int i, start, end, j;

    fgets(str, sizeof(str), stdin);

    i = 0;

    while(str[i] != '\0')
    {
        while(str[i] == ' ')
        {
            printf(" ");
            i++;
        }

        start = i;

        while(str[i] != ' ' &&
              str[i] != '\n' &&
              str[i] != '\0')
        {
            i++;
        }

        end = i - 1;

        for(j = end; j >= start; j--)
            printf("%c", str[j]);

        if(str[i] == '\n')
            break;
    }

    printf("\n");

    return 0;
}
