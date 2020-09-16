#include<stdio.h> 
int d[100][100];
int n, i, j;
int main() {
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) {
		for(j=1;j<=i;j++) {
			if(j==1) {
				d[i][j] = 1;
			}
			else {
				d[i][j] = d[i-1][j-1] + d[i-1][j];
			}
			printf("%d", d[i][j]);
		}
		printf("\n");
	}
}
