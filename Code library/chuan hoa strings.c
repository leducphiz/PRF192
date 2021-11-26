#include<stdio.h>
#include<conio.h>
#include<string.h>

void delete(char s[100],int noixoa)
{
	int i , n=strlen(s);
    for(i=noixoa;i<n;i++)
     s[i]=s[i+1];
	 s[n-1]='\0'; 
} 
void removeSpace(char *s)
{   
    int i;
    for(i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' ')
		{
			delete(s,i);
			i--;
		}
    if(s[0]==' ')
		delete(s,0);
    if(s[strlen(s)-1]==' ')
		delete(s,strlen(s)-1);
}
void dem( char s[])
{
	int count=1;
	int n;
	n = strlen(s);
	int i;
	for (i = 0; i <= n-1; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
			count ++;
	}
	printf ("%d", count);
}
void main()
{
    char s[100];
    gets(s);
	removeSpace(s);
    puts(s);
    dem(s);
}

