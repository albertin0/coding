#include<stdio.h>
#include<math.h>
/*double roundoff2(double a)
{
	int b = (int)a;
	double c = a-(double)b;
	int d = (int)c*100.0;
	double c2 = (double)d/100.0;
	a = (double)b + c2;
	return a;
}*/
int main()
{
	int t,m;
	double m2,p,chef,total,t1,t2,thief,mc1,mc2;
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
			thief=total*p;
			chef=total-thief; 
			if(thief<0.001)
			{
				//chef = roundoff2(chef); 	thief = total-chef;
				chef = total;	 	thief = total-chef;
			}
			else if(chef<0.001)
			{
				thief = total;	chef = total-thief;
			}

		}
		else if(m==3)//chef's turn
		{
			t1=total*p*p;		t2=total*(1-p);
			if(t1>t2)
				chef=t1;
			else
				chef=t2;
			thief=total-chef;
			if(thief<0.001)
			{
				chef = total; 	thief = total-chef;
			}
			//else if(chef<0.01)
			//{
				//thief =roundoff2(thief);	chef = total-thief;
//			}
			/*if(total*p*p>=0.01 && total*p*(1-p)>=0.01)
			{
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
			}*/
		}
		printf("\n%lf %lf", chef, thief);
	}
	return 0;
}