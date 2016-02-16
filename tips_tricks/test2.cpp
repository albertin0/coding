#include <iostream>
#include <cmath>
using namespace std;
#define P 10000000
int main()
{
	int i,j,a,b;
	for(i=1;i<=11;i++)
	{
		a = (int)ceil((double)(i-1)/2.0);
		b = (int)ceil((double)i/2.0)-1;
		if(a != b)
			cout<<i<<"   "<<a<<"   "<<b<<endl;
	}
	return 0;
}