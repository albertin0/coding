#include<stdio.h>
#include<math.h>

int main()
{
	int t,n,ic,id,lc,l,s;
	double lt,st;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&n,&ic,&lc,&id);
		scanf("%d %d",&l,&s);
		lt=l*(abs(lc-ic)+abs(ic-id));
		st=s*(abs(id-ic));
		if(lt<=st)
			printf("\nLIFT");
		else
			printf("\nSTAIRS");
	}
	return 0;
}