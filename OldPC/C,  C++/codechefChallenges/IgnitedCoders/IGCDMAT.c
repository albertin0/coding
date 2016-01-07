#include<stdio.h>
int min(int a, int b)
{
	if(a<=b)	return a;
	else	return b;
}
int main()
{	int t,n,i,j,k,l,g,iden,flag,temp;	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n][n];
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		iden=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]==1)
				{
					temp=min(n-j,n-i);
					for(g=1;g<=temp;g++)//grid
					{
						flag=1;
						for(k=0;k<g;k++)
						{
							for(l=0;l<g;l++)
							{
								if((k==l&&a[i+k][j+l]!=1)||(k!=l&&a[i+k][j+l]!=0))
								{	flag=0;		break;	}									
							}
							if(flag==0)		break;
						}
						if(flag==1)
							iden++;
						else
							break;
					}
				}
			}
		}
		printf("\n%d",iden);
	}
	return 0;
}