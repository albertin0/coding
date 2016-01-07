#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	double a_i,b_i,x,y,q,an,bn;
	long int s;
	int i,k,len;
	scanf("%d %d ",&i,&k);
	scanf(" %d",&s);
	scanf("%lf %lf",&a_i,&b_i);
	len=i-k;
	len=abs(len);
	x = pow(2.0,0.5);		y = pow(3.0,0.5);
	//printf("\n\n i=%d  k=%d   len=%d ",i,k,len);
	//printf("\n\n a_i=%lf  b_i=%lf   s=%lf ",a_i,b_i,s);

	if(i<=k)
	{
		while(len--)
		{
			an=a_i;		bn=b_i;
			a_i = x*(an+bn) - x*y*(an-bn);
			b_i = x*(an-bn) + x*y*(an+bn);
		}
	}
	else
	{
		while(len--)
		{
			an=a_i;		bn=b_i;
			a_i = (an*(1-y)+bn*(1+y))/(2*x*(1+y*y));
			b_i = (an*(1+y)+bn*(y-1))/(2*x*(y*y+1));
		}
	}
	q = (a_i + b_i)/(pow(2,s));
	printf("\n%lf",q);
	return 0;
}