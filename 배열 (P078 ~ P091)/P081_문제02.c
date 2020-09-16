#include <stdio.h>
int d[7];
int i;
int main() {
	int n, t;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d", &t);
		d[t]+=1;
	}
	
	for(i=1; i<=6; i++)
		printf("%d", d[i]);
		
	printf("\n");
}
