#include<stdio.h>
int main()
{
	int t,m,i;
	double p,chef,total,thief,proposal;
	total = 1000000000.0f;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d ",&m);
		scanf("%lf",&p);
		proposal=total;
		chef=thief=0;
		for(i=0;i<=m-1;i++)
		{
			//printf("\n\ni=%d    proposal=%lf",i,proposal);
			if(i%2==0)
			{
				if(chef<proposal)
				{
					chef = proposal;
					thief = total-proposal;
					//printf("\nChef's turn:    chef=(%lf)    thief=%lf",chef,thief);
				}
				else	break;
			}
			else
			{
				if(thief<proposal)
				{
					thief = proposal;
					chef = total-thief;
					//printf("\nThief's turn:    chef=%lf    thief=(%lf)",chef,thief);
				}
				else	break;
			}
			proposal*=p;
		}
		printf("\n%lf %lf",chef,thief);
	}
	return 0;
}