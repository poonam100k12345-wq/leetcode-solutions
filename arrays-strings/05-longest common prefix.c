#include <stdio.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    static char prefix[200];

    if (strsSize == 0)
        return "";

    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++)
    {
        int j = 0;

        while (prefix[j] && strs[i][j] &&
               prefix[j] == strs[i][j])
        {
            j++;
        }

        prefix[j] = '\0';
    }

    return prefix;
}

int main()
{
    char *strs1[] = {"flower", "flow", "flight"};
    printf("Test 1 Result: %s\n",
           longestCommonPrefix(strs1, 3));

    char *strs2[] = {"dog", "racecar", "car"};
    printf("Test 2 Result: %s\n",
           longestCommonPrefix(strs2, 3));

    return 0;
}