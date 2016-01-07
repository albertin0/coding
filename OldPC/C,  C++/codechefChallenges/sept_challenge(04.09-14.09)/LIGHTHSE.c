#include<stdio.h>
int main()
{	int t, n, in[100000][2], xmax, xmin, ymax, ymin, i, j, k, flag, xcor, xcor1, xcor2, ycor, ycor1, ycor2, pos2, pos1;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=0; i<n; i++)
			scanf("%d %d", &in[i][0], &in[i][1]);
		xmax= ymax= -1000000000;
		xmin= ymin= 1000000000;
		for(i=0; i<n; i++)
		{
			if(in[i][0]>xmax)
			{	xmax= in[i][0];		xcor2= xmax;	ycor2= in[i][1];	pos2= i+1;	}
			if(in[i][0]<xmin)
			{	xmin= in[i][0];		xcor1= xmin;	ycor1= in[i][1];	pos1= i+1;	}
			if(in[i][1]>ymax)
				ymax= in[i][1];
			if(in[i][1]<ymin)
				ymin= in[i][1];
		}
		flag=0;
		for(i=0; i<n; i++)
		{
			if(in[i][0]==xmin && in[i][1]==ymin)
			{
				printf("\n1\n%d NE", i+1);	flag=1;
				break;		
			}
			if(in[i][0]==xmin && in[i][1]==ymax)
			{
				printf("\n1\n%d SE", i+1);	flag=1;
				break;		
			}
			if(in[i][0]==xmax && in[i][1]==ymin)
			{
				printf("\n1\n%d NW", i+1);	flag=1;
				break;		
			}
			if(in[i][0]==xmax && in[i][1]==ymax)
			{
				printf("\n1\n%d SW", i+1);	flag=1;
				break;		
			}
		}
		if(flag==0)	
		{
			if(ycor1>ycor2)
				printf("\n2\n%d SE\n%d NW",pos1,pos2);
			else
				printf("\n2\n%d NE\n%d SW",pos1,pos2);
		}
	}
	return 0;
}