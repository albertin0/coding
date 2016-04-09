#include <iostream>

using namespace std;

int main()	{
	int tc;
	double ve,vy,l,t;
	cin>>tc;
	while(tc--)	{
		cin>>ve>>vy>>l>>t;
		double w=(l/(ve+vy)), nw = l/ve;
		//cout<<w<<endl<<nw<<endl;
		if((nw-w)/(double)t >= 1)
			cout<<"1\n";
		else
			cout<<(nw-w)/(double)t<<endl;
	}
}