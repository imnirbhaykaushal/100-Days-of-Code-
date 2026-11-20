/* Q97: Print the initials of a name.
   Example: John Doe -> J.D.
*/

#include <stdio.h>

int main()
{
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    if(name[0] != ' ' && name[0] != '\n')
        printf("%c.", name[0]);

    for(i = 1; name[i] != '\0'; i++)
    {
        if(name[i - 1] == ' ' &&
           name[i] != ' ' &&
           name[i] != '\n')
        {
            printf("%c.", name[i]);
        }
    }

    printf("\n");

    return 0;
}
