#include<iostream>
using namespace std;
int main()
{
	int n,i,j,max_s=0,pos_s,max_d=0,pos_d,temp_s_beg;
	cin>>n;
	int arr[n];
	int dep=0,seq=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
		{
			if(dep==0)
			{	temp_s_beg=i+1;		seq=0;	}
			seq++;		dep++;	
			if(dep>max_d)
			{	max_d = dep;	pos_d=i+1;		}
		}
		else//arr[i]==2
		{
			dep--;	seq++;
			if(dep==0)
			{
				if(seq>max_s)
				{	max_s = seq;	pos_s=temp_s_beg;		}
			}
		}
	}
	cout<<max_d<<" "<<pos_d<<" "<<max_s<<" "<<pos_s;
	return 0;
}
