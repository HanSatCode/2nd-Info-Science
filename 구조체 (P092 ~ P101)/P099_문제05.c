#include <stdio.h>
int n, i, j, k, c;
struct matrix {int d[2][2];};
int main()
{
	struct matrix m[10], t, tt;
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
		for(k=0;k<=1;k++)
			scanf("%d %d", &m[i].d[k][0], &m[i].d[k][1]);
	
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			if(i==j) t.d[i][j]=1;
			else t.d[i][j]=0;
			
			tt.d[i][j]=0;
		}
		
		for(c=0;c<n;c++)
		{
			for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					for(k=0;k<2;k++)
						tt.d[i][j]+=t.d[i][k]*m[c].d[k][j];
						
		for(i=0;i<2;i++)
			for(j=0;j<2;j++)
			{
				t.d[i][j]=tt.d[i][j];
				tt.d[i][j]=0;
			}
		}
		
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
				printf("%d", t.d[i][j]);
			printf("\n");
		}
}
