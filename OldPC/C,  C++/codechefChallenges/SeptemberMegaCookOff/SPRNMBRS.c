#include<stdio.h>

int main()
{
	int t;
	long long int l,r,i,j,n1,n2,rem,nosn,nocp;
	scanf("%d",&t);
	while(t--)	
	{
		scanf("%lld %lld",&l,&r);
		nosn=0;
		for(i=l;i<=r;i++)
		{
			nocp=0;
			for(j=1;j<=i;j++)
			{
				n1=i;	n2=j;
				while(n2)
				{
					rem = n1 % n2;
					n1 = n2;
					n2 = rem;
				}
				if(n1==1)
					nocp++;
			}
			if(i%nocp==0)
				nosn++;
		}
		printf("\n%lld",nosn);
	}
	return 0;
}