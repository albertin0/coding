//#include<iostream>
//using namespace std;
#include<stdio.h>

int main()
{
	int n,m,c,i,j,temp;
	scanf("%d %d %d",&n,&m,&c);
	int a[c+2][1002];
	int b[1002];
	
	for(i=0;i<1002;i++)  //make all 1st row elements 0.
		b[i]=a[0][i]=0;

	for(i=0;i<c+2;i++)   //make all 1st column elements 0.
		a[i][0]=0;

	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		a[0][temp]++;		
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&temp);
		b[temp]++;		
	}
	for(i=0;i<1002;i++)
	{
		a[0][i]=b[i]*a[0][i];		
	}

	
	for(i=1;i<1001;i++)
		a[1][i]=a[0][i]+a[1][i-1];

	for(i=2;i<=c+1;i++)
	{
		temp=0;
		for(j=1;j<1001;j++)
		{
			a[i][j]=a[i-1][j-1]*a[0][j];
			temp+=a[i][j];
		}
		a[i][1001]=temp;
	}
	//row index=2  represents sequence 1;
	for(i=2;i<=c+1;i++)
		printf("%d ",a[i][1001]);

	return 0;
}