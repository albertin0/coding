#include <iostream>

using namespace std;

bool isPalin(long long n)	{
	long long temp = n, rev=0;
	while(temp)	{
		rev = rev*10 + temp%10;
		temp /= 10;
	}
	if(rev == n)	return true;
	else		return false;
}
int main()	{
	long long t,n,i;
	cin>>t;
	while(t--)	{
		cin>>n;
		n++;
		while(!isPalin(n))	n++;
		cout<<n<<endl;
	}
	return 0;
}