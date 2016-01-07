#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int t,nl,i;
	double px,py,dist;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&nl);
		double col[nl][3];
		i=0;
		while(i<nl)
		{
			scanf("%d %d %d",&col[i][0], &col[i][1], &col[i][2]);
			i++;
		}
		dist=0.0;
		i=0;
		while(nl--)
		{
			if(px<col[i][1] || px>col[i][2])
			{
				if(abs(px-col[i][1])<=abs(px-col[i][2]))
				{
					dist+=pow(	(	pow(abs(col[i][0]-py),2)+	pow(abs(col[i][1]-px),2)	)	,	0.5);
					px=col[i][1];
					py=col[i][0];
				}
				else
				{
					dist+=pow(	(	pow(abs(col[i][0]-py),2)+	pow(abs(col[i][2]-px),2)	)	,	0.5);
					px=col[i][2];
					py=col[i][0];
				}
			}
			else
			{
				dist+=abs(py-col[i][0]);
				py=col[i][0];
			}
			i++;
		}
		printf("\n%.7lf",dist);
	}
	return 0;
}