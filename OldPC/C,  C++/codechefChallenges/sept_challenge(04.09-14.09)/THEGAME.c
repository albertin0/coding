#include<stdio.h>

int main()
{
	int t,i,j,r,c,lf,tf,rf,bf,cmax,rmax,limit,k;
	double ans,vp,tp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&r,&c);
		char a[r][c][2],junk;	tp=0;
		/*for(i=0;i<r;i++)
		{
			scanf(" %[^\n]",a[i]);
		}*/
		for(i=0;i<r;i++)
		{
			getchar();
			for(j=0;j<c;j++)
			{
				scanf("%c",&a[i][j][0]);
				a[i][j][1]=0;
				if(a[i][j][0]=='o')
					tp++;
			}
		}
		rmax = r; cmax=c;
		if(rmax<=cmax)
			limit=rmax/2+1;
		else
			limit=cmax/2+1;
		for(k=0;k<limit;k++)
		{
			lf=tf=1;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{	//printf("%c",a[i][j][0] );
					if(j!=0)
						if(a[i][j-1][0]=='o' && a[i][j-1][1]==1)
							lf=1;
					if(i!=0)
						if(a[i-1][j][0]=='o' && a[i-1][j][1]==1)
							tf=1;
					if((tf==1 || lf==1) && a[i][j][0]=='o')
						a[i][j][1]=1;	//printf(" (%d,%d) ",i,j);}
					tf=lf=0;
				}	//printf("\n");
			}
			rf=bf=1;
			for(i=r-1;i>=0;i--)
			{
				for(j=c-1;j>=0;j--)
				{
					if(j!=c-1)
						if(a[i][j+1][0]=='o' && a[i][j+1][1]==1)
							rf=1;
					if(i!=r-1)
						if(a[i+1][j][0]=='o' && a[i+1][j][1]==1)
							bf=1;
					if((bf==1 || rf==1) && a[i][j][0]=='o')
						a[i][j][1]=1;
					bf=rf=0;
				}
			}
		}
		vp=0;
		//printf("\n\n\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(a[i][j][1]==1)
						vp++;	
				//if(a[i][j][0]=='o' && a[i][j][1]==0)
					//printf("%c",a[i][j][0]);
				//else
					//printf("%d",a[i][j][1]);
			}
			//printf("\n");
		}
		printf("\n%lf",(vp/tp) + 2*((tp-vp)/tp));
	}
	return 0;
}