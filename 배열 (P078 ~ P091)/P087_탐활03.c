#include<stdio.h>
int d[100][100];
int n, m, k;
int x, y, v;
int i, j;
int main() {
	scanf("%d %d %d", &n, &m, &k);
	
	for(i=0;i<k;i++) {
		scanf("%d %d %d", &x, &y, &v);
		d[x][y]=v;
	}
	
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			printf("%d", d[i][j]);
		}
		printf("\n");
	}
}
