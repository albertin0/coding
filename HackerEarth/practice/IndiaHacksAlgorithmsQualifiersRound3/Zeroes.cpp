#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long n,i,j,q,temp,b,zeroes,mul;
	cin>>n;
	long long arr[n];
	long long nofacs[n][317];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		for(j=2;j<=316;j++)
		{
			temp = j;
			nofacs[i][j]=0;
			while(temp<arr[i])
			{
				nofacs[i][j] += arr[i]/temp;
				temp *= j;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
			cout<<nofacs[i][j]<<"  ";
		cout<<endl;
	}
	/*
	cin>>q;
	while(q--)
	{
		cin>>b;
		zeroes=0;
		mul = 1;
		for(i=0;i<n;i++)
		{
			temp = arr[i];
			//if(temp<b)
			if(temp<b)
				mul*=temp;
			//zeroes += (log(temp)/log(b));
			while(temp%b == 0)
			{
				temp/=b;
				zeroes++;
			}
		}
		while(mul%b==0)
		{
			mul/=b;		zeroes++;
		}
		cout<<zeroes<<endl;
	}
	return 0;
	*/
}