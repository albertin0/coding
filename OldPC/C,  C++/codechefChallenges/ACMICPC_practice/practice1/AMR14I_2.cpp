#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t,n,m,s,p,q,pt=0,qt=0,fp=0,fq=0,i,meet;
	cin>>t;
	while(t--)
	{
		pt=qt=1;fp=fq=meet=0;
		cin>>n>>m>>s>>p>>q;
		//cout<<endl<<"  i=1"<<"  pt="<<pt;
		for(i=1;i<=s;i++)
		{
				pt+=p;
				//cout<<endl<<"  i="<<i<<"  pt="<<pt;
				if(pt>=m&&fp==0)
				{	fp=1;	pt-=m;	}
				if(pt>=(n-m+1)&&fp==1)
					pt=pt%(n-m+1);	
				//cout<<endl<<"  i="<<i<<"  pt="<<pt;
			
			
				qt+=q;
				//cout<<endl<<"  i="<<i<<"  qt="<<qt;
				if(qt>=m&&fq==0)
				{	fq=1;	qt-=m;	}
				if(qt>=(n-m+1)&&fq==1)
				{	qt=qt%(n-m+1);	}
				//cout<<endl<<"  i="<<i<<"  qt="<<qt;
			
			if(qt-pt==0&&fp==1&&fq==1)
				meet++;		//cout<<endl<<"  "<<qt<<"  "<<pt<<" s="<<i<<"  ";	}
		}
		cout<<endl<<meet;
	}
	return 0;
}
