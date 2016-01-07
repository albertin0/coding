#include<stdio.h>
int main()
{
	int t,n,x,y,rem;
	scanf("%d",&t);
	scanf("%d",&n);
	while(t--)
	{
		scanf("%d %d",&x,&y);
		rem=1;
		while(y--)
			rem=(rem*x)%n;
		printf("\n%d",rem);
	}
	return 0;
}