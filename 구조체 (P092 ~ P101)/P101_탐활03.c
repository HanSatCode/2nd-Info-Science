#include <stdio.h>
#include <math.h>
struct point
{
	float lt; //latitude
	float lg; //longtitude
};

int main()
{
	int n;
	struct point p[100];
	float dm=987654321;
	int dmi=-1, i;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
		scanf("%f %f", &p[i].lt, &p[i].lg);
		
	scanf("%f %f", &p[i].lt, &p[i].lg);
	
	for(i=0;i<n;i++)
	{
		float dlt=p[i].lt-p[n].lt;
		float dlg=p[i].lg-p[n].lg;
		
		if(sqrt(dlt*dlt+dlg*dlg)<dm)
		{
			dmi=i;
			dm=sqrt(dlt*dlt+dlg*dlg);
		}
	}
	
	
	printf("%f %f", p[dmi].lt, p[dmi].lg);
}
