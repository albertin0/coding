//root of the problem
#include<conio.h>
#include<stdio.h>

int main()
{
	int t,n,i,max0,max1;
	//int nn[][];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d", &n);
		int nn[n][2];
		i=n;
		max0=0;
		max1=0;
		while(i--)
		{
			scanf("%d %d", &nn[i][0], &nn[i][1]);
			if(max0<nn[i][0]){	max0=nn[i][0];	}
			if(max1<nn[i][1]){	max1=nn[i][1];	}
		}

		if(max0>max1)
		{
			printf("%d", max0);
		}
		printf("\n");
	}
	return 0;
}