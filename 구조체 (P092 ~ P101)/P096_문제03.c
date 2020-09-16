#include <stdio.h>
int n, i;
struct point { int x; int y;};
int main()
{
	struct point p[10];
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
		scanf("%d %d", &p[i].x, &p[i].y);
		
	for(i=0; i<n; i++)
		printf("%d %d\n", p[i].x, p[i].y);
}
