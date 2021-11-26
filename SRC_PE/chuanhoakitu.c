#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// remove redundant spaces in a string s
void removeRedSpaces(char s[])
{
    int n, low, up, i, j;
    char x[100];
    n = strlen(s);
    i = 0;
    j = n - 1;
    while (i < n && s[i] == ' ')
        i++;
    low = i;
    while (j > 0 && s[j] == ' ')
        j--;
    up = j;
    if (low > up)
    {
        strcpy(s, "");
        return;
    }
    strcpy(x, "");
    i = low;
    j = 0;
    while (i <= up)
    {
        while (i < up && s[i] == ' ')
            i++;
        while (i <= up && s[i] != ' ')
            x[j++] = s[i++];
        if (i <= up)
            x[j++] = ' ';
    }
    x[j] = '\0';
    strcpy(s, x);
}

// Enter data for a string s
void input(char s[])
{
    printf("Enter a string s:\n");
    fflush(stdin);
    gets(s);
    removeRedSpaces(s);
}

// Display a string s
void display(char s[])
{
    printf("%s\n", s);
}
void split(char s[], char a[][10], int *n)
{
    int j = 0;
    int i;
    for (i = 0; i <= strlen(s); i++)
        if (s[i] == ' ' || s[i] == '\0')
        {
            a[*n][j] = '\0';
            *n = *n + 1;
            j = 0;
        }
        else
        {
            a[*n][j] = s[i];
            j++;
        }
}

void upper(char s[])
{
    int i, n = strlen(s);
    for (i = 0; i < n; i++)
        if (s[i] >= 97 && s[i] <= 122)
            s[i] = s[i] - 32;
}
//--------------------------------------------------------
void fun(int tc, char s[]) // Complete this function
{                          // Write your statements here
    char a[10][10];
    int n = 0, t = 1;
    split(s, a, &n);
    printf("number of word=%d\n", n);
}

int main()
{ // Do not edit this function
    // system("cls");
    printf("\nTEST Q3 (2 marks):\n");
    int tc;
    char s[100];
    printf("Enter tc (1 or 2) = ");
    scanf("%d", &tc);
    input(s);
    printf("\nThe original string:\n");
    display(s);
    printf("\nThe string after processing:\n");
    fun(tc, s);
    display(s);
    // OUTPUT for marking:
    printf("\nOUTPUT:\n");
    display(s);
    printf("\n");
    system("pause");
    return (0);
}
