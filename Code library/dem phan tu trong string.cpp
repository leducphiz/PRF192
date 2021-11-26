#include <stdio.h>
#include<conio.h>
#include<string.h>
void input(char s[100])
{
	printf ("nhap mang:  ");scanf("%s",s);
}
void dem( char s[])
{
	int count;
	int i;
	for (i = 0; i < strlen(s); i++)
	{
		if (i = ' ')
		{
			break;
		}
		else 
		{
			count++;
		}
	}
	printf (" chuoi co so tu la:  %d", count);
}
int main () 
{
	char s[100];
	input (s);
	dem (s);
	puts(s);
}
