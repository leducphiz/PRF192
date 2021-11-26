#include<stdio.h>
 int main()
{
    int s=0;
for (int i=1;i<=9;i++){
s=s+i;
if (s>=6) break;
s=s+1;
}
printf("%d\n",s);
}
