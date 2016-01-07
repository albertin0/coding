#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	   cin>>n;
	   int a[n],i,sum=0,temp;
	   for(i=0;i<n;i++)
	   {
	      cin>>a[i];  sum+=a[i];
	   }
	   double x = (double)sum/(double)n - (double)(n-1)/2.0;
	   if(fabs(x - round(x)) < 0.001)
	   {
	      sum = 0;temp = (int)x;
	      for(i=0;i<n;i++)
	         sum += abs(x++ - a[i]);
	      cout<<(sum/2)<<endl;
	   }
	   else
	      cout<<-1<<endl;
	}
	return 0;
}
