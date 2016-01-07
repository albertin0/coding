#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t,n,i,flag;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		flag=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(i>0)	
			{	a[i-1]=a[i]-a[i-1];
				//cout<<"  "<<a[i-1];
			}
		}
		
		for(i=0;i<n-1;i++)
		{
			if(a[i]<0)
			{
				if(i==0 && (abs(a[0])>abs(a[1])))
				{		
					flag=1;
					break;
				}
				if(i==n-2 && (abs(a[n-2])>abs(a[n-3])))
				{
					flag=1;
					break;
				}
				else if(abs(a[i])>abs(a[i-1])||abs(a[i]>abs(a[i+1])))
				{
					flag=1;
					break;
				}
				//if(flag==1)
				//	break;
			}
			//if(flag==1)
			//	break;
		}
		if(flag==1)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
}