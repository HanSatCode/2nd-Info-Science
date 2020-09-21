/*

// 1¹ø

#include <stdio.h>
int f(int n)
{
	if(n<=2)
		return 1;
	else
		return f(n-1)+f(n-2);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
	

// 2¹ø

#include <stdio.h>
char star[10000];
void f(int n)
{
	if(n>0)
	{
		f(n-1);
		star [n]="*";
		printf("%s\n", star+1);
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	f(n);
	return 0;
}
