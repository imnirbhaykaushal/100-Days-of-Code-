/* Q93: Check if two strings are anagrams of each other. */

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count[256] = {0};
    int i, anagram = 1;

    scanf("%s", str1);
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++)
        count[(int)str1[i]]++;

    for(i = 0; str2[i] != '\0'; i++)
        count[(int)str2[i]]--;

    for(i = 0; i < 256; i++)
    {
        if(count[i] != 0)
        {
            anagram = 0;
            break;
        }
    }

    if(anagram == 1)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
