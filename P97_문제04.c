#include <stdio.h>
#include <math.h>
int n, i;
struct point { int x; int y; float d;};
int main()
{
	struct point p[10];
	int mi; float md;
	scanf("%d", &n);
	
	mi=0; md=999;
	for(i=0;i<n;i++)
	{
		scanf("%d %d", &p[i].x, &p[i].y);
		p[i].d=(float)sqrt(p[i].x*p[i].x+p[i].y*p[i].y);
		if(p[i].d<md) { mi=i; md=p[i].d; }
	}
	
	printf("%d %d %.3f\n", p[mi].x, p[mi].y, p[mi].d);
} 
