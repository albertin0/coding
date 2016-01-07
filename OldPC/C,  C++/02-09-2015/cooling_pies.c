#include<stdio.h>

int main()
{
	int test,in,pie_wt[100],limit_wt[100],key,i,j,count;

	scanf("%d", &test);
	while(test--)
	{
		scanf("%d",&in);
		for(i=0; i<in; i++)
		{
			scanf("%d",&pie_wt[i]);
		}
		
		for(i=0; i<in; i++)
		{
			scanf("%d",&limit_wt[i]);
		}

		for(i=1; i<in ; i++)
		{
			key = pie_wt[i];
			for(j=i-1; j>=0 && pie_wt[j]>key ; j--)
			{
				pie_wt[j+1] = pie_wt[j];
								
			}
			pie_wt[j+1] = key;
		}

		/*for(i=0; i<in; i++)
		{
			printf("%d ",pie_wt[i]);
		}*/

		for(i=1; i<in ; i++)
		{
			key = limit_wt[i];
			for(j=i-1; j>=0 && limit_wt[j]>key ; j--)
			{
				limit_wt[j+1] = limit_wt[j];
								
			}
			limit_wt[j+1] = key;
		}

		count= 0;
		for(i=in-1; i>=0; i--)
		{
			if(limit_wt[in-1-count] >= pie_wt[i])
				count++;
		}

		printf("\n%d", count);
	}
}