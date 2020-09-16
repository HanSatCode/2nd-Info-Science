#include <stdio.h>
struct point
{
	float x, y;
};
int main()
{
	struct point p1, p2;
	scanf("%f %f", &p1.x, &p1.y);
	scanf("%f %f", &p2.x, &p2.y);
	
	printf("%f %f", (p1.x+p2.x)/2, (p1.y+p2.y)/2);
}
