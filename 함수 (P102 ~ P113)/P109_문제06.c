#include <stdio.h>
int a, b, c, d;

int f(int p, int q){return p<q?p:q;}
int g(int p, int q){return p>q?p:q;}

int main()
{
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d %d\n", f(f(a,b),f(c,b)), g(g(a,b),g(c,d)));
}
