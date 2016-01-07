#include<stdio.h>
int main()
{
	int in[100000],i,j,nos,n,t,max;
	//int stacks[100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&in[i]);
		nos=0;max=0;j=0;
		for(i=0;i<n;i++)
		{
			if(in[i]>=max)
			{
				in[nos]=in[i];	nos++;
				max=in[i];
				//printf("\n");
			}
			else
			{
				for(j=0;j<nos;j++)
				{
					if(in[i]<in[j])
					{
						in[j]=in[i];
						if(j==nos-1)
							max=in[j];
						break;
					}
				}
			}
		}
		printf("\n%d",nos);
		for(i=0;i<nos;i++)
			printf(" %d",in[i]);
	}
	return 0;
}