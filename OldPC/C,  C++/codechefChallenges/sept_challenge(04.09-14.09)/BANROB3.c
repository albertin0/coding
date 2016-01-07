#include<stdio.h>
#include<math.h>
int main()
{
	int t,m,i;
	double p,chef,total,thief,proposal,c1,c2,t1,t2;
	total = 1000000000.0f;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d ",&m);
		scanf("%lf",&p);
		if(p==0.0)
		{
			chef=total;	thief=0.0;
		}
		else if(p==1.0)
		{
			if(m%2==0)
			{
				thief=total;	chef=0.0;
			}
			else
			{
				chef=total;		thief=0.0;
			}
		}
		else//0.0<p<1.0
		{
			i=(-1)*(1/(log2(p)));//at the beginning of ith min total becomes half
			if(m%2!=0)//priority to chef as his last proposal
			{
				if(i>=m-1)//total is not half i.e whatever the total-thief's_proposals is less than chef's proposals
				{
					chef = total*pow(p,m-1);
					thief = total - chef;
				}
				/*else if(i%2!=0)//beg of ith min is chef's turn
				{
					c1 = total*pow(p,i);
					c2 = total*(1.0-pow(p,i+1));
					if(c1>=c2)
						chef=c1;
					else
						chef=c2;
					thief= total - chef;
				}
				else//ith thief's turn
				{
					c1 = total*(1.0-pow(p,i));
					c2 = total*pow(p,i+1);
					if(c1>=c2)
						chef=c1;
					else
						chef=c2;
					thief= total - chef;	
				}*/
				
				
			}
			else//priority to thief
			{
				if(i>=m-1)
				{
					thief = total*pow(p,m-1);
					chef = total - thief;
				}
				/*else if(i%2==0)//beg of ith min is chef's turn
				{
					t1 = total*(1.0-pow(p,i));
					t2 = total*pow(p,i+1);
					if(t1>=t2)
						thief=t1;
					else
						thief=t2;
					chef = total-thief;
				}
				else//ith thief's turn
				{
					t1 = total*pow(p,i);
					t2 = total*(1.0-pow(p,i+1));
					if(t1>=t2)
						thief=t1;
					else
						thief=t2;
					chef = total-thief;	
				}*/	
			}
		}
		printf("\n%lf %lf",chef,thief);
	}
	return 0;
}