#include <stdio.h>

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else if( ch == '\t' || ch == ' ' || ch == '\n'  )
    {
		printf("'%c' is white space.", ch);
	}else
    {
        printf("'%c' is not an alphabet.", ch);
    }
	getch();
    return 0;
}
