#include <stdio.h>
int n, i, j;
void f(int k)
{
	for(i=1;i<=k;i++)
		printf("*");
		
	printf("\n");
	return;
}

int main()
{
	scanf("%d", &n);
	
	for(j=1;j<=n;j++)
		f(j);
}
