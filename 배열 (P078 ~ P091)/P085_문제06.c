#include <stdio.h>
char s[10001];
int i;
int main(){ 
	int cnt=0;
	scanf("%s", s);
	
	for(i=0; s[i]!='\0'; i++)
		cnt++; 
		
	printf("%s %d\n", s, cnt);
}
