#include <stdio.h>
struct point { float x; float y; };
struct point f(struct point p, struct point q)
{
	struct point t;
	t.x = (p.x+q.x)/2;
	t.y = (p.y+q.y)/2;
	
	return t;
}

int main()
{
	struct point a, b, t;
	scanf("%f %f", &a.x, &a.y);
	scanf("%f %f", &b.x, &b.y);
	
	t = f(a, b);
	
	printf("%.3f %.3f\n", t.x, t.y);
}
