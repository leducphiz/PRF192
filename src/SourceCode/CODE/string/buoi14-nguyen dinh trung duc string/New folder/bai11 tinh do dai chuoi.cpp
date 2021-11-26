/*bai 11 viet ham tinh do dai cua chuoi */
#include <stdio.h>
 
int main() {
	char c[1000];
	gets(c);
	int i = 0;
	while(c[i] != '\0') {
    i++;
	} 
	printf("%d", i);
	return 0;
}
