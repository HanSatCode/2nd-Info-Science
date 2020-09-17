#include <stdio.h>
int n, i;
void f()
{
	printf("*");
	return;
}

int main()
{
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
		f();	
}
