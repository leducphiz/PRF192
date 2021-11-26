#include<stdio.h>

#include<stdlib.h>

#include<string.h>

 

int main()

{

      FILE *fp;

      char line[80];

     

      fp = fopen("lines.txt", "w");

      if(fp == NULL)

      {

            puts("Cannot open file");

            exit(1);

      }

      printf("Enter some lines: \n");

      while(strlen(gets(line)) > 0)

      {

            fputs(line, fp);

            fputs("\n", fp);

      }

      fclose(fp);

}
