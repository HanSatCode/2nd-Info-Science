#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d %d\n", a, b);
	int tmp=a;
	a=b;
	b=tmp;
	printf("%d %d", a, b);
}
