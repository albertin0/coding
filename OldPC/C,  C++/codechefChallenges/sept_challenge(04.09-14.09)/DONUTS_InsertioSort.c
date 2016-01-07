#include<stdio.h>
#include<stdlib.h> 
int a[20000];

void InsertionSort(int *a, int len)
{
	int i,j,key;
	for(i=1;i<len;i++)
	{
		key=a[i];	j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j--;
			//printf("\n  j=%d    i=%d",j,i);
		}
		a[j+1] = key;
	}
}

int main()
{
	int t,n,m,i,cuts,temp,m2;
	scanf("%d",&t);
	while(t--)
	{		
		scanf("%d %d", &n, &m);		
		for(i =0; i<m; i++)
		{
			scanf("%d", &a[i]);
		}
		InsertionSort(a,m);
		//printf("\n\n  %d %d %d %d",a[0],a[1],a[2],a[3]);
		i=0; m2=m;
		cuts =0;
		while(i<m && m2>1)
		{
			if(a[i]+2<=m2)
			{
				cuts += a[i];
				m2 -= a[i]+1;
				//printf("\nif(des<=m2)  cuts:%d  m2:%d",cuts,m2);
			}
			else
			{
				cuts += m2-1;
				m2 =1;
				//printf("\nelse:  cuts:%d  m2:%d",cuts,m2);
			}
			i++;
		}
		printf("\n%d", cuts);
	}
	return 0;
}
