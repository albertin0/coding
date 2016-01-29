#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
	int n,i,j,arr[1000];
	cin>>j;
	while(j--)
	{
		cin>>n;
		memset(arr,0,sizeof(arr));
		int ptr=0,lim,zero;
		zero = (int)log2(n)+1;
		lim = n - pow(2,zero-1);
		for(i=1;i<=lim;i++)
		{
			arr[ptr]=1;
			while(ptr-1>=0 && arr[ptr-1]==arr[ptr])
			{
				arr[ptr]=0;
				ptr--;
				arr[ptr]++;
			}
			ptr++;
		}
		cout<<zero<<" ";
		for(i=0;i<ptr;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}