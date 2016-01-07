#include<stdio.h>
int a[20000];
int main()
{
	int t,n,m,i,ans,temp;
	scanf("%d",&t);
	while(t--)
	{		
		scanf("%d %d", &n, &m);		
		int b[n];
		for(i=0;i<n;i++)	b[i]=0;
		for(i =0; i<m; i++)
		{
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		/*temp= m/2;
		if( j >= temp)
			ans = temp;
		else
			ans = m-1-j;*/
		ans=0; 
		for(i=1; i<n && m>1; i++)//m2 total no. of smaller chains present // we check for
		{							// complete destruction of each i sized smaller donut.
			/*if(m2<=i)//all the rest smaller chains r less than i
			{
				ans=ans+m2-1;
				m2=0;	printf("   if  i%d   %d",i,ans );
			}
			else if(b[i]!=0)
			{
				/*temp= m2/(i+2);
				if(temp>=b[i])
				{
					ans+=b[i]*i;
					m2=m2-b[i]*(i+2)+1;
				}
				else
				{
					ans+=temp*i;
					m2=m2-temp*(i+2)+1;
				}*/
			if(b[i]!=0)
			{
				if((b[i]*(i+1)+1)<=m)
				{
					ans += i*b[i];
					m -= b[i]*(i+1);
				}
				else if(i<m)
				{
					temp = (m-1)/(i+1);
					ans += temp*i;
					m -= temp*(i+1);
				}
			}
			else
			{
				ans += m-1;
				m=1;
			}
		}
		printf("\n%d", ans);
	}
	return 0;
}