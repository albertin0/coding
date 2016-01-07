#include<stdio.h>

int main()
{
	int t,in,n,rem,rev;

	scanf("%d", &t);
	while(t--)
	{
		scanf("%d",&in);

		n=in;
		rev =0;
		while(n!=0)
		{
			rem = n% 10;
			n=n/10;
			rev = rev * 10 + rem; 
		}

		if(rev == in)
			printf("\nwins");
		else
			printf("\nlosses");
	}
}