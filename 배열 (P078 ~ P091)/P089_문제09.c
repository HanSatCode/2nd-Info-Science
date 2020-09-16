#include<stdio.h>
char star[110][110];
int i,j;
int main(){
    int n;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        for(j=0;j<=i;j++)
            star[i][j]='*';
            
    for(i=0;i<n;i++)
        printf("%s\n",star[i]);
}
