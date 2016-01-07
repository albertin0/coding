#include<stdio.h>
#include<math.h>
int roundoff_2dec(double a)
{
	int b = (int)a;
	double c = a-(double)b;
	int d = (int)c*100.0;
	double c2 = (double)d/100.0;
	a = (double)b + c2;
	return 0;
}
int main()
{
	int t,m,i,j;
	double p,chef,total,thief,proposal,c1,c2,t1,t2,a;
	total = pow(10.0,9.0);
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d ",&m);
		scanf("%lf",&p);
		a = (-1.0)*(11.0/(log10(p)));
		j = (int)a;
		if(a>(double)j)
			j++;

		if(p==0.0 || m==1)
		{		chef=total;		thief=0.0;		}
		else if(p==1.0)
		{	if(m%2==0)
			{	thief=total;	chef=0.0;	}
			else
			{	chef=total;		thief=0.0;	}
		}
		else if(m-1>j)//proposal becomes <0.01 after jth min 
		{
			if(j%2==0)//chef's lsat prp as thief has proposed earlier so, thief gets min
			{
				thief = total*pow(p,j-1);
				chef = total-thief;
				chef = roundoff_2dec(chef);
				thief = total-chef;
			}
			else
			{
				chef = total*pow(p,j-1);
				thief = total-chef;	
				thief = roundoff_2dec(thief);
				chef = total-thief;
			}
		}
		//else if(m-1>=j)
		//	chef=thief=0.0;
		else
		{
			i=(-1)*(1/(log2(p)));//total value becomes half at the beg of ith min
			if(m%2==0)//thief's last prop
			{
				if(m-1<i)
				{
					thief = total*pow(p,m-1);
					chef = total - thief;
				}
				else//if m-1 min > ith min
				{
					chef = total*(1.0-pow(p,m-2));
					thief = total-chef;
				}			
				
			}
			else
			{
				if(i>=m-1)
				{
					chef = total*pow(p,m-1);
					thief = total - chef;
				}
				else
				{
					thief = total*(1.0-pow(p,m-2));
					chef = total-thief;
				}
			}
		}
		printf("\n%lf %lf",chef,thief);
	}
	return 0;
}