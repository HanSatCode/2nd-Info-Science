#include <stdio.h>
char s[10001];
int i;
int main(){
	scanf("%s", s);
	
	for(i=0; s[i]!='\0'; i++)
		printf("%c", s[i]);
		
	printf("\n");
}
