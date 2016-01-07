#include<iostream>
using namespace std;

int main() 
{
	int m,n;
	int t,cakes_req,i,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		cakes_req = n;
		bool index[n];
		for(i=0;i<n;i++)
			index[i]=false;
		k=m+1;//m+1 being 1st position //now k is index value of 1st robot
		while(1)
		{
			if(index[k-1])
				break;
			else
			{
				index[k-1]=true;
				cakes_req--;
				if((m+k)<=n)//m+1+k-1
				   k = (m+k);
				else
				   k = (m+k)-n;//index of kth position from m+1 being 1st position
			}
		}
		if(cakes_req)
			cout<<"NO "<<cakes_req<<endl;
		else
			cout<<"YES"<<endl;
	}
   return 0;
}
