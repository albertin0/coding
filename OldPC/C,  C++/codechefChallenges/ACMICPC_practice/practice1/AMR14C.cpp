#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
	int t,n,m,x,i,j,count;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>m;
		cin>>x;
		int a[n];
		for(i=0;i<n;i++)
		{	cin>>a[i];	a[i]=a[i]%m;	}
		count=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if((a[i]+a[j])%m<=x)
					count++;
			}
		}
		cout<<endl<<count;
	}
	return 0;
}