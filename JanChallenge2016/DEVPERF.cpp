#include <iostream>

using namespace std;

int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
	int t,n,m,rmx,rmn,cmx,cmn,i,j,ans,b;
	char in;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		//char in[n][m];
		rmn = cmn = 1001;
		rmx = cmx = -1;
		b=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>in;
				if(in=='*')
				{
					b=1;
					if(i<rmn)
						rmn = i;
					if(i>rmx)
						rmx = i;
					if(j<cmn)
						cmn = j;
					if(j>cmx)
						cmx = j;
				}
			}
		}
		//cout<<"cmx ="<<cmx<<"cmn ="<<cmn<<"rmx ="<<rmx<<"rmn ="<<rmn<<endl;
		if(b==0)
		{
			cout<<"0\n";
			continue;
		}
		ans = max(cmx-cmn-1,rmx-rmn-1);
		/*
		if(ans%2==0)//ans-1 max diff blocks
			ans /= 2;
		else
			ans = ans/2 + 1;
		*/	 
		if(ans<=0)
		{
			cout<<ans+2<<"\n";
			continue;
		}
		/*ans /= 2;
		if(ans%2!=0 || ans==0)
			ans++;
		cout<<ans<<endl;
		*/
		if(ans<=2)
		{
			cout<<ans+1<<"\n";
			continue;
		}
		/*
		if(ans%2==0)
			ans = ans/2 + 2;
		else
			ans = ans/2 + 2;
		*/
		ans = ans/2 + 2;
		cout<<ans<<endl;
	}
	return 0;
}