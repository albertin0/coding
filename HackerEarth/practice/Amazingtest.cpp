#include <iostream>
#include <vector>
using namespace std;
int findmaxindex(vector<int> a)
{
	int i,maxi=0;
	for(i=1;i<a.size();i++)
		if(a[i]>a[maxi])
			maxi = i;
	return maxi;
}
int main()
{
	int t,n,x,i,temp,max1,max1i,max2,max2i;
	cin>>t;
	vector<int>::iterator ptr;
	while(t--)
	{
		cin>>n>>x;
		vector<int> a;
		ptr = a.begin();
		for(i=0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);
		}
		//max1i = findmaxindex(a);//returns index of max no.
		//max1 = a[max1i];
		while(a.size()>=2 && x>=a[findmaxindex(a)])
		{
			max1i = findmaxindex(a);
			max1 = a[max1i];
			a.erase(ptr+max1i);
			max2i = findmaxindex(a);
			max2 = a[max2i];
			a.erase(ptr+max2i);
			max1-=max2;
			x-=max2;
			if(max1>0)
				a.push_back(max1);
			cout<<" "<<max1<<"  "<<max2<<endl;
			//max1i = findmaxindex(a);//returns index of max no.
			//max1 = a[max1i];
		}
		if(a.empty())
			cout<<"YES";
		else
			cout<<"NO";
		/*
		ptr= a.begin();
		for(i=0;i<a.size();i++)
			cout<<a[i]<<" ";
		//ptr+=2;
		a.erase(ptr+2);
		cout<<endl;
		ptr = a.begin();
		for(;ptr!=a.end();ptr++)
			cout<<*ptr<<" ";
		*/
	}
	return 0;
}