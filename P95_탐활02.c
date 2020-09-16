#include <stdio.h>
#include <math.h>
struct point
{
	float x, y;
};
int main()
{
	struct point p1;
	scanf("%f %f", &p1.x, &p1.y);
	
	printf("%.3f", sqrt(p1.x*p1.x+p1.y*p1.y));
}
