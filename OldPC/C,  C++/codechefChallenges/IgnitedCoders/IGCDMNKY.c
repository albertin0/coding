#include<stdio.h>

int main()
{
	int t,j,s,h,n,tempi;
	double ans,temp;
	scanf("%d",&t);
	while(t--)
	{
		n=0;
		scanf("%d %d %d",&h,&j,&s);
		//printf("\nh=%d j=%d s=%d",h,j,s);
		//tempi=h-n*(j-s);
		do
		{
			n++;
			tempi=h-n*(j-s);
		}while(tempi>j);
		/*printf("\n n=%d",n);
		temp =(double)(h-n*(j-s))/(double)j;
		printf("\n temp=%lf",temp);
		ans=temp + (double)n;*/
		ans = n + (double)tempi/j;
		printf("\n%lf",ans);
	}
	return 0;
}