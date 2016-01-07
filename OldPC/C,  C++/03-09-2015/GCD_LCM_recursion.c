#include<stdio.h>

int gcd_cal(int a,int b) // b dividend, a divisor
{
	if(a==0)
		return b;
	else
		return gcd_cal(b%a, a);// a becomes dividend, b%a divisor
}
int main()
{
	int t,a,b,gcd,lcm;

	scanf("%d", &t);
	while(t--)
	{
		scanf("%d",&a);		scanf("%d",&b);
		gcd = gcd_cal(a,b);

		lcm = a*b/gcd ;

		printf("\n%d %d", gcd, lcm);

	}
	return 0;
}