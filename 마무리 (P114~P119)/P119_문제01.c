#include <stdio.h>
int main()
{
	char s[150];
	scanf("%s", &s);
	int cnt=0, i=0;
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]=='1') cnt=cnt+1;
	}
	printf("%d", cnt);
	return 0;
} 
