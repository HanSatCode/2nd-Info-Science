#include <stdio.h>
char s[10001];
int k;
int i;
int main(){
	scanf("%s %d", s, &k); 
	
	for(i=0; s[i]!='\0'; i++) 
		printf("%c", ((s[i]-'a')+k)%26+'a');
}
