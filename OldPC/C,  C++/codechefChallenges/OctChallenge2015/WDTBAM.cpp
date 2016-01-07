#include<iostream>
#include<string>

using namespace std;
int main()
{
	int t,i,j,k,n,tempc,max,sol;
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
		for(i=0;i<chef.length();i++)
		{
			for(j=0;j<cor.length();j++)
			{
				if(cor.at(i)==chef.at(i))
				{
					tempc=1;
					for(k=1;k+i<chef.length()&&k+j<cor.length();k++)
					{
						if(cor.at(k+i)==chef.at(k+i))
							tempc++;
						else
							break;
					}
					if(tempc>max)
						max=tempc;
				}
				if(k+i==chef.length())
					break;
			}
			if(k+i==chef.length())
				break;
		}
		sol=0;
		for(i=0;i<=max;i++)
			if(w[i]>sol)
				sol=w[i];
		cout<<endl<<sol;
	}
	return 0;
}