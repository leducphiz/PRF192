#include <stdio.h>
#include <string.h>

void Uppercace(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (i == 0 || (i > 0 && s[i - 1] == 32))
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] = s[i] - 32;
            }
        }
        else
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
        }
    }
}

int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    Uppercace(s);
    printf("\n%s", s);
}
