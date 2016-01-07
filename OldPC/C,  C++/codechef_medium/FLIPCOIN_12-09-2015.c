#include<stdio.h>

int main()
{
	int n,t,ll,ul,i,m,j,heads;
	scanf("%d %d",&n,&t);
	int s[n];
	for(i=0;i<n;i++)
		s[i]=0;
	for(i=1;i<=t;i++)
	{
		scanf("%d %d %d",&m,&ll,&ul);
		if(m==1)
		{
			heads=0;
			for(j=ll;j<=ul;j++)
				if(s[j]==1)
					heads++;
				printf("\n%d",heads);
		}
		else
		{
			for(j=ll;j<=ul;j++)
			{
				if(s[j]==1)
					s[j]=0;
				else
					s[j]=1;
			}
		}
	}
	return 0;
}