#include <iostream>
#include <cmath>
#define coutln(var) cout<<var<<endl;
#define ll long long
using namespace std;

long long add1(long long num,long long len)	{
	ll temp,varBinary,rev;
	temp = num - pow(10,(len-1)) - 1;
	rev = 0;
	while(temp)	{
		//coutln(__LINE__);
		rev = rev*10 + (temp%10);
		temp /= 10;
	}
	varBinary=0;
	while(rev)	{
		//coutln(__LINE__);
		varBinary = varBinary*2 + (rev%10);
		rev /= 10;
	}
	varBinary++;
	num = pow(10,(len-1)) + 1;
	ll power = 1;
	while(power<=len-2)	{
		num += pow(10,(varBinary%2));
		varBinary = varBinary>>1;
	}
	
}

long long numToBase10FromI(long long num,long long i)	{
	//coutln(__LINE__);
	long long ret = 0,temp,rev=0;
	temp = num;
	while(temp)	{
		//coutln(__LINE__);
		rev = rev*10 + (temp%10);
		temp /= 10;
	}
	num = rev;
	while(num)	{
		//coutln(__LINE__);
		ret = ret*i + (num%10);
		num /= 10;
	}
	return ret;
}
bool isPrime(long long n)	{
	//coutln(__LINE__);
	long long i,lim = sqrt(n);
	for(i=2;i<=lim && n%i!=0;i++)	//coutln(__LINE__);
	if(i==lim+1)	return true;
	else			return false;
}
long long nearestNonTrivialFactor(long long n)	{
	//coutln(__LINE__);
	long long i,lim = sqrt(n);
	for(i=2;i<=lim;i++)
		if(n%i==0)	return i;
}
int main()	{
	long long t,n,j,c,num,i,numInBase10;
	bool found;
	long long arr[11];
	cin>>t;
	c = 0;
	while(t--)	{
		//coutln(__LINE__);
		c++;	//to count the cases
		cin>>n>>j;
		num = pow(10,n-1) + 1;
		cout<<"Case #"<<c<<":"<<endl;
		while(j>0)	{
			//coutln(__LINE__);
			//for(i=0;i<11;i++)	arr[i] = 0;
			found = false;
			for(i=2;i<11;i++)	{//base 2 to 10
				//coutln(__LINE__);
				numInBase10 = numToBase10FromI(num,i);
				if(isPrime(numInBase10))	{
					//coutln(__LINE__);
					num = add1(num,n);
					i = 11;
				}
				else	{	//if not prime
					//coutln(__LINE__);
					arr[i] = nearestNonTrivialFactor(numInBase10);
					if(i==10)	found = true;
				}
			}
			if(found)	{ //jam Coin found
				//coutln(__LINE__);
				j--;
				found = false;
				cout<<num<<" ";
				for(i=2;i<11;i++)	cout<<arr[i]<<" ";
				cout<<endl;
				num = add1(num,n);
			}
		}
	}
}