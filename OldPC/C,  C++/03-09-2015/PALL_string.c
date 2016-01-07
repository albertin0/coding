#include<stdio.h>
#include<string.h>

int main()
{
	char in[2000];
	int len,t,mid,i;

	scanf("%d",&t);

	while(t--)
	{
		scanf("%s", &in);
		len = strlen(in);
		mid = len/2;

		for(i=0; i<mid; i++)
		{
			if(in[i]!=in[len-1-i])
				break;
		}

		if(i == mid)
			printf("\nwins");
		else
			printf("\nlosses");
	}
}