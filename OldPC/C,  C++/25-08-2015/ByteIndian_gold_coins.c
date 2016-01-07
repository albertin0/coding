#include<stdio.h>

long unsigned int call(long unsigned int);
int main()
{
	long unsigned int t,n;
	scanf("%lu", &t);
	while(scanf("%lu",&n)!=EOF)
	{
		scanf("%lu", &n);
		printf("\n%lu", call(n) );
	}
	return 0;
}

long unsigned int call(long unsigned int n)
{
	if(n<12)
		return n;
	else
		return (call(n/2) + call(n/3) + call(n/4));
}