#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int len = strlen(s);
    int ans = 1;

    for (int i = 0; i < len; i++)
    {
        if (s[i] != s[len - 1 - i])
        {
            ans = 0;
            break;
        }
    }

    if (ans == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
