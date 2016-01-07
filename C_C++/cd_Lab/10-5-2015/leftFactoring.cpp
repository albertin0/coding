#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>	

using namespace std;

int main()
{
	int p,sizearr,i,j;
	cout<<"\nEnter no. of productions:";
	cin>>p;
	string pro[p],newp[p];
	char beg[p];
	int num[p];
	for(i=0;i<p;i++)
	{
		cin>>pro[i];
		sizearr=strlen(beg);
		cout<<" size: "<<sizearr;
		for(j=0;j<sizearr;j++)
		{
			if(pro[i].at(0)==beg[j])
				break;
		}
		if(j==sizearr)
			beg[j]=pro[i].at(0);
	}
	sizearr=sizeof(beg)/sizeof(char);
	for(i=0;i<sizearr;i++)
	{
		cout<<endl<<beg[i];
	}

	return 0;
}