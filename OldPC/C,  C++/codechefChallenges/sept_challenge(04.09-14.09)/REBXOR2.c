#include<stdio.h>
//#include<math.h>
int main()
{
	int n,i,in[400000];
	//int bt[400000][30]; //2^0 - 2^29
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d", &in[i]);
	
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<30;j++)
		{
			if(in[i]>=pow(2,j))
				bt[i][j]=1;
			else
				bt[i][j]=0;
			printf(" %d",bt[i][j] );
		}
		printf("\n");
	}*/
	return 0;
}
