#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n,i,t;
	cin>>n;
	bool in[n+1];
	memset(in,false,sizeof(in));
	for(i=0;i<n;i++)
	{
		cin>>t;
		if(t>0)
			in[t]=true;
	}
	for(i=1;i<=n;i++)
		if(in[i]==false)
			cout<<i<<" ";
	return 0;
}