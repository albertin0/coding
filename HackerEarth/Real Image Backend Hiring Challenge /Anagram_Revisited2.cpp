#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int> M;
	map<string, int> :: iterator it;
	int n,i,max;
	cin>>n;
	string temp;
	for(i=1;i<=n;i++)
	{
		cin>>temp;
		sort(temp.begin(),temp.end());
		M[temp]++;
	}
	max = 0;
	for(it = M.begin();it!=M.end();it++)
		if(max<it->second)
			max = it->second;
	cout<<max<<endl;
}