#include<stdio.h>
int main()
{
	int t,n,l[5000][2];
	double slope[4999];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		temp=n;
		while(temp--)
			scanf("%d %d",&l[n-temp-1][0],&[n-temp-1][1]);
		for(i=1;i<n;i++)
			slope[i-1]=(l[i][1]-l[0][1])/(l[i][0]-l[0][0]);//max no of slopes=n-1
		count=1;
		max=0;
		for(i=0;i<n-1;i++)
		{
			if()
		}

	}
	return 0;
}