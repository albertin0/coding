#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,i,n,tempc,max,sol;
	string cor,chef;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>cor;
		cin>>chef;
		int w[n+1];
		for(i=0;i<=n;i++)
			cin>>w[i];
		max=0;
		for(i=0;i<n;i++)
			if(cor.at(i)==chef.at(i))
				max++;
		
		sol=w[max];
		if(max!=n)
			for(i=0;i<=max;i++)
				if(w[i]>sol)
					sol=w[i];
		cout<<endl<<sol;
	}
	return 0;
}