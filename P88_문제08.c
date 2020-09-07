#include<stdio.h>
int i,j,n,m,d[20][20], dt[20][20]; 
int main(){
    scanf("%d %d",&n,&m);

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf("%d",&d[i][j]);

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            dt[i][j]=d[i][j]+dt[i-1][j]+dt[i][j-1]-dt[i-1][j-1];

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            printf("%d ", dt[i][j]);
        printf("\n");
    }
}
