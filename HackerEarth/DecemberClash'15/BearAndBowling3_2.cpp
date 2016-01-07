#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif
#define m 1000000007
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
void scanlong(long long *y)
{
 register long long c = gc();
 register long long x = 0;
 for(;(c<48 || c>57);c = gc())
  ;
 for(;c>47 && c<58;c = gc())
 {
   x = (x<<1) + (x<<3) + c - 48;
 }
 *y = x;
}/*
long long call(long long arr[],long long n,long long i,long long k)
{
	if(i==n)
	{
		//cout<<"terminated"<<i<<"=i   k="<<k<<endl;
		return 0;
	}
	long long temp=0,j;
	//cout<<i<<"=i   k="<<k<<endl;
	for(j=1;j<=pow(2,n-(i+1));j++)
		temp = (temp + (arr[i]*k)%m)%m;
	temp = (temp + call(arr,n,i+1,k+1))%m;//including arr[i]
	temp = (temp + (call(arr,n,i+1,k)%m))%m;//excluding arr[i]
	//cout<<"total before returning:  "<<temp<<"\n\n";
	return temp;
}*/
long long c(long long n,long long r)
{
	long long result=1,i;
	for(i=1;i<=r;i++)
		result = (result * (n+1-i) / i)%m;
	return result;
}
int main()
{
	long long k,n,i,total=0;
	scanlong(&n);
	long long arr[n];
	for(i=0;i<n;i++)
	{
		scanlong(&arr[i]);
		//total = (total + ( ( ((i+2)*(i+1))%m )*arr[i]/2 )%m * ((int)pow(2,n-(i+1)))%m)%m;
		for(k=1;k<=i+1;k++)
			total = (total + (((arr[i]*k)%m * ((long long)pow(2,n-(i+1))))%m * c(i,k-1))%m)%m;
	}
	//cout<<call(arr,n)<<endl;
	printf("%lld\n",total);
	return 0;
}
