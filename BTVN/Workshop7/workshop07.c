#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <stdbool.h>
#define MAX 10000

int function_choice();
void input(char string[]);
int countString(char string[]);
void splitString(char string[]);
void properString(char string[]);
void removeSpaceString(char string[]);
void checkValid(char string[]);

int main()
{
    system("color");
    char string[MAX];
    char next;

    int choice;
    printf("Choose one of the following options:\n");
    printf("1. Input a string\n");
    printf("2. Split a string into words\n");
    printf("3. Convert a string into proper form\n");
    printf("4. Remove redundant spaces\n");
    printf("5. Check valid name\n");
    printf("0. Exit\n");
    do
    {
        choice = function_choice();
        switch (choice)
        {
        case 1:
            input(string);
            break;
        case 2:
            splitString(string);
            break;
        case 3:
            properString(string);
            break;
        case 4:
            removeSpaceString(string);
            break;
        case 5:
            checkValid(string);
            break;
        case 0:
            printf("See you later! ^^");
            return 0;
        }
    } while (choice != 0);
}

int function_choice()
{
    int choice;
    printf("\033[0;36mYour selection (0->5): \033[0m");
    fflush(stdin);
    scanf("%d", &choice);
    return choice;
}

// 1. Input a string
void input(char string[])
{
    printf("Input a string: ");
    fflush(stdin);
    gets(string);
}
// 2. Split a string into words
int countString(char string[])
{
    int count = 0;
    for (int i = 0; i < strlen(string); i++)
        if (string[i] != 32 && (string[i + 1] == 32 || string[i + 1] == NULL))
            count++;
    return count;
}

void splitString(char string[])
{
    int count = 0;
    char tmp[MAX];
    strcpy(tmp, string);
    printf("The original string: ");
    puts(string);
    printf("Number of words in the string: %d, they are: \n", countString(string));
    char *token;
    token = strtok(tmp, " \t");
    while (token != NULL)
    {
        puts(token);
        token = strtok(NULL, " \t");
        count++;
    }
}
// 3. Convert a string into proper form
void properString(char string[])
{
    char tmp[MAX];
    strcpy(tmp, string);
    printf("The original string: ");
    puts(string);
    printf("The proper form: ");
    for (int i = 0; i <= strlen(tmp); i++)
    {
        if (tmp[i] == 32 && tmp[i + 1] != 32)
        {
            if (tmp[i + 1] >= 'a' && tmp[i + 1] <= 'z')
                tmp[i + 1] -= 32;
        }
        if (tmp[0] >= 'a' && tmp[0] <= 'z')
            tmp[0] -= 32;
    }
    puts(tmp);
}
// 4. Remove redundant spaces
void removeSpaceString(char string[])
{
    char tmp[MAX];
    strcpy(tmp, string);
    printf("The original string: ");
    puts(string);
    printf("The cleaned form: ");
    for (int i = 0; i < strlen(tmp); i++)
    {
        if (tmp[i] == 32 && tmp[i + 1] == 32)
        {
            for (int j = i; j < strlen(tmp); j++)
                tmp[j] = tmp[j + 1];
            i--;
            tmp[strlen(tmp)] = NULL;
        }
    }
    if (tmp[0] == 32)
    {
        for (int i = 0; i < strlen(tmp); i++)
            tmp[i] = tmp[i + 1];
        string[strlen(tmp)] = NULL;
    }
    if (string[strlen(tmp)] == 32)
        string[strlen(tmp)] = NULL;
    puts(tmp);
}
// 5. Check valid name
void checkValid(char string[])
{
    bool check = true;
    for (int i = 0; i < strlen(string); i++)
    {
        if (isalpha(string[i]) == 0 && string[i] != 32)
        {
            check = false;
            break;
        }
    }
    if (check == true)
        printf("%s is a valid name\n", string);
    else
        printf("%s is not a valid name\n", string);
}
