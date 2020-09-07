#include <stdio.h>
char s[10001];
int main(){
	int n, i;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++) 
		scanf("%c", &s[i]);
		
	for(i=0; i<n; i++) 
		printf("%c", s[i]);
		
	printf("\n");
} 
