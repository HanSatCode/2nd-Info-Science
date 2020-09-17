#include <stdio.h>
int n, i;
int f(int k)
{
	int s=0;
	for(i=1;i<=k;i++)
		s+=i;
		
	return s;
}

int main()
{
	scanf("%d", &n);
	printf("%d\n", f(n));
}
