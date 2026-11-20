/* Q81: Count characters in a string without strlen(). */

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
        i++;

    printf("%d\n", i);

    return 0;
}
