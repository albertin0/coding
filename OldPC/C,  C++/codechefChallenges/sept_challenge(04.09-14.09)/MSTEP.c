#include<stdio.h>
#include<stdlib.h>
/*int modulo_sub(int a,int b)
{
	if(a>b)
		return a-b;
	else
		return b-a;
}*/
int main()
{
	int t,a[500][500],n,i,j,k,steps,row1,row2,col1,col2,s1,s2;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		int b[n*n+1][2];
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				scanf("%d", &a[i][j]);
				b[a[i][j]][0]=i;	b[a[i][j]][1]=j;
			}
		}
		
		//printf("\n%d  %d\n", row1,col1 );

		/*steps =0;
		for(i=2; i<= n*n; i++)
		{
			for(j=0; j<n; j++)
			{
				for(k=0; k<n; k++)
				{
					if( a[j][k] == i)
					{
						row2 = j;	col2 = k;	//break;
					}
				}
				/*if( a[j][k] == i)
				{
					break;
				}
			}
			//printf("\n i =%d, row2=%d, col2=%d, row1=%d, col1=%d \n",i,row2,col2,row1,col1);

			s1 = abs(row2-row1); 
			s2 = abs(col2-col1);
			steps = steps + s1 + s2;
			row1 = row2;		col1 = col2;
		}*/
		steps = 0;
		for(i=1; i<=n*n-1;i++)
		{
			steps = steps + abs(b[i][0]-b[i+1][0]) + abs(b[i][1]-b[i+1][1]);
		}
		printf("\n%d", steps);
	}
	return 0;
}