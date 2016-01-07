#include<stdio.h>
int main()
{
	int t,n,m,m2,i,cuts,temp,min,min_prev,count;
	int a[20000];
	scanf("%d",&t);
	while(t--)
	{		
		scanf("%d %d", &n, &m);		
		for(i =0; i<m; i++)
			scanf("%d", &a[i]);
		cuts=0; 
		m2=m;	min_prev=0;
		while(m2>1)
		{
			min=2000000001;		count=0;			
			for(i=0;i<m;i++)
			{	if(min>a[i] && a[i]>min_prev)
					min=a[i];
				}
			for(i=0;i<m;i++)
				if(a[i]==min)
					count++;
				//printf("\n   min=%d    count=%d",min,count);
			if(count==0)
			{
				cuts += m2-1;
				m2=1;
				//printf("\n  if(count==0)->  cuts:%d",cuts);
			}
			if((count*(min+1)+1)<=m2)
			{
				cuts += count*min;
				m2 -= count*(min+1);
				//printf("\n  <=m2->  cuts:%d",cuts);
			}
			else if(min<m2)
			{
				temp = (m2-1)/(min+1);
				cuts += temp*min;
				m2 -= temp*(min+1);
				//printf("\n (min<m2) ->  cuts:%d",cuts);
			}
			min_prev=min;
		}
		printf("\n%d", cuts);
	}
	return 0;
}