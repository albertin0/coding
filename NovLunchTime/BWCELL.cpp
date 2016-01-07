#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int t,i,j,Black[5000],len,Bset,swSets,evSets,oddSets;
	bool region;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		len = s.length();
		Bset = swSets = evSets = oddSets =0;
		region = false; //false for W and true for B
		for(i=0;i<len;i++)
		{
			if(s[i]=='B' && region==true)
			{	Black[Bset-1]++;	}
			else if(s[i]=='B' && region==false)
			{	Bset++;	Black[Bset-1]=1;	region = true;	}
			else if(s[i]=='W' && region==true)
			{	region = false;	
				if(Black[Bset-1]>1)
				{
					if(Black[Bset-1]%2)
						evSets++;
					else
						oddSets++;
				}
			else if(s[i]=='W' && region==false)
				continue;
		}
		for(i=0;i<Bset;i++)
			cout<<"   "<<Black[i]<<endl;
	}
	return 0;
}