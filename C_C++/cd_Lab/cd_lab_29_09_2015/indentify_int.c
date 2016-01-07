#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	int blank=1;
	printf("\n");
	gets(c);
	int len=strlen(c),i;
	for(i=0;i<=len-3;i++)
	{
		if(c[i]==' ')
			blank++;
		if(c[i]=='i'&&c[i+1]=='n'&&c[i+2]=='t')
			printf("\n int is at location:%d",blank);
	}
	return 0;
}