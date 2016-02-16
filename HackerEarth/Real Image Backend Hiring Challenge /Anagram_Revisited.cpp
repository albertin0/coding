#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int fac(int n)
{
	int i,t=1;
	for(i=1;i<=n;i++)
		t*=i;
	return t;
}
int main()
{
	int n, i, max,maxi;
	cin>>n;
	string s;
	int arr[51];
	memset(arr,0,sizeof(arr));	
	for(i=0;i<n;i++)
	{
		cin>>s;
		//if(s.length()<10)
		arr[s.length()]++;
	}
	maxi=max=0;
	for(i=50;i>=1;i--)
	{
		cout<<"for length "<<i<<"strings ="<<arr[i]<<"\n";
		if(arr[i]>max)
		{	
			max = arr[i];
			maxi = i;
		}
	}
	cout<<maxi<<endl;
	return 0;
}