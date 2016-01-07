#include<iostream>
using namespace std;
int main()
{
	long long int t,n,i,count,nosa,prev;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		cin>>a[0];
		prev=a[0];
		count=1;
		nosa=0;
		for(i=1;i<n;i++)
		{
			cin>>a[i];
			if(prev<=a[i])
			{
				count++;
			}
			else
			{
				nosa+=(count+1)*count/2;
				count=1;
			}
			prev=a[i];
		}
		nosa+=(count+1)*count/2;
		cout<<endl<<nosa;
	}
	return 0;
}