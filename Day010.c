#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    fgets(string, sizeof(string), stdin);

    int length = strlen(string);

    // remove newline if present
    if (string[length - 1] == '\n')
    {
        string[length - 1] = '\0';
        length--;
    }

    int left = 0;
    int right = length - 1;

    while (left < right)
    {
        if (string[left] != string[right])
        {
            printf("NO");
            return 0;
        }
        left++;
        right--;
    }

    printf("YES");
    return 0;
}
