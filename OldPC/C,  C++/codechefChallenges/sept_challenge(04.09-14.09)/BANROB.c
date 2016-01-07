#include<stdio.h>
#include<math.h>
int main()
{
	int t,m;
	double m2,p,chef,total,mt1,mt2,thief,mc1,mc2;
	total = 1000000000.0;
	scanf("%d",&t);
	while(t--)
	{
		thief=chef=0;
		scanf("%d %lf", &m, &p);
		if(m==1 || p==0)
		{
			chef = total;	thief=0.0;
		}
		else if(m==2)
		{
			if(total*p>=0.01 && total*(1-p)>=0.01)
			{
				thief=total*p;
				chef=total-thief; 
			}
			else
			{
				chef=total;
				thief=0.0;
			}
		}
		else if(m==3)//chef's turn
		{
			if(total*p*p>=0.01 && total*p*(1-p)>=0.01)
			{
				if(total*p*p>total*(1-p))
					chef=total*p*p;
				else
					chef=total*(1-p);
				thief=total-chef;
			}
			else if(total*(1-p)>=0.01 && total*p>=0.01)
			{
				thief=total*p;		chef=total-thief; 
				//chef=thief=0.0;
			}
			else
			{
				chef=total;		thief=total-chef;
			//	chef=thief=0;
			}
		}
		printf("\n%lf %lf", chef, thief);
	}
	return 0;
}