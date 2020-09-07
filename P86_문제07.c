#include<stdio.h>
int i,j,n,d[20][20];
int main(){
    scanf("%d.",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&d[i][j]);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ", d[i][j]);
        printf("\n");
    }
}
