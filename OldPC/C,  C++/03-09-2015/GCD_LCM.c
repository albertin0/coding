#include<stdio.h>

int gcd_calc(int *a, int *b)
{	
	
	if(*a < *b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
	int rem,n1,n2;
	n1 = *a; n2= *b;
	while(n2)
	{
		rem = n1 % n2;
		n1 = n2;
		n2 = rem;
	}
	return n1;
}
int main()
{
	int t,a,b,gcd,lcm,n1,n2,rem;

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&a);		scanf("%d", &b);
		
		/*n1 = a; n2= b;

		while(n2)
		{
			rem = n1 %n2;
			n1 = n2;
			n2 = rem; 
		}
		
		gcd = n1;
		*/
		gcd = gcd_calc(&a, &b);
		lcm = a*b/gcd;
		//lcm = lcm * b;

		printf("%d %d\n", gcd, lcm);
	}
	return 0;
}