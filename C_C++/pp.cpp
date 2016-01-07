#include<iostream>

using namespace std;

int main()
{
	int t,n,i,j,k,count,len;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s[n],temp;
		count=0;
		bool pal;
		for(i=0;i<n;i++)
		{	cin>>s[i];
			//cout<<(int)s[i][s[i].length()];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i!=j)
				{
					temp=s[i]+s[j];
					len=temp.length();
					pal=true;
					for(k=0;k<(len/2.0);k++)
					{
						if(temp[k]!=temp[len-1-k])
						{
							pal=false;
							break;
						}
					}
					if(pal==true)
						count++;
				}
			}
		}
		cout<<count;
	}
	return 0;
}
