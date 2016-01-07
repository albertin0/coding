#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,k,pos,i;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d",&n);
		int *a = (int*)calloc(n,sizeof(int));
		for(i=0 ; i< n ; i++)
			{
				scanf("%d",(a+i));
			}
		scanf("%d",&k);
		pos=bubble(a,k,n);
		printf("%d\n",pos);
		free(a);
	}
	return 0;
}
int bubble(int *a, int k, int n)
{
	int i,j,temp,val = a[k-1];
	for(i=0;i<n; i++)
	{
		for(j=0;j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				if(j==k-1 )
					k++;
				else if(j+1==k-1 )
						k--;
				
			}
			
		}
	}
	return (k);
}