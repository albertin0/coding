#include <iostream>
#include <cstring>

using namespace std;
bool isPalin(int n)	{
	int temp = 0,a = n;
	while(a)	{
		temp = temp * 10 + a % 10;
		a = a / 10;
	}
	if(temp == n)	return true;
	else return false;
}
int reverse(int a)	{
	int temp = 0;
	while(a)	{
		temp = temp * 10 + a % 10;
		a = a / 10;
	}
	return temp;
}
int main()	{
	int i,n,c=0;
	for(i=100;i<=999;i++)	{
		n = i + reverse(i);
		n = n + reverse(n);
		if(n>999)	continue;
		if(!isPalin(n))	{
			cout<<i<<"\t"<<n<<endl;
			c++;
		}
	}
	cout<<endl<<c<<endl;
	return 0;
}
