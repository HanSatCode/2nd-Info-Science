#include <stdio.h>
int i, n, d[10001];
int main() {
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
		scanf("%d", &d[i]);	
	
	for(i=1; i<=n; i++)
		printf("%d", d[i]);
	
	printf("\n");
}
