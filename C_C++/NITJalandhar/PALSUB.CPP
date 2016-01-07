#include<stdio.h>

int main()
{
	int t,n,i;
	//char str[1000000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		char str[n];
		scanf("%s",str);
		for(i=1;i<n;i++)
			if(str[0]!=str[i])
				break;
		//i=1;
		if(i==n)
			printf("1\n");
		else
			printf("2\n");
	}
	return 0;
}