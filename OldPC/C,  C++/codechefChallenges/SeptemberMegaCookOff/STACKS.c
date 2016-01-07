#include<stdio.h>
int main()
{
	int in[100000],i,j,flag,nos,n,t;
	//int stacks[100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&in[i]);
		nos=0;
		for(i=0;i<n;i++)
		{
			flag=0;
			for(j=0;j<nos;j++)
			{
				if(in[i]<in[j])
				{
					in[j]=in[i];	flag=1;
					break;
				}
			}
			if(flag==0)
			{
				in[j]=in[i];	nos++;
			}
		}
		printf("\n%d",nos);
		for(i=0;i<nos;i++)
			printf(" %d",in[i]);
	}
	return 0;
}