#include<stdio.h>
char cross[110][110];
int main() {
	int n, i, j;
	scanf("%d", &n);
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i==j||(i+j)==(n-1)) {
				cross[i][j]= '*';
			}
			else {
				cross[i][j] = ' ';
			}
		}
	}
	for(i=0;i<n;i++) {
		printf("%s\n", cross[i]);
	}
}
