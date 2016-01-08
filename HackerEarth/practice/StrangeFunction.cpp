#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	//for memset()
#include <math.h>	//for fabs()
using namespace std;

void scanlonglong(long long *y)
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
}

int main()
{
	long long n,c,i,j,sum;
	scanlonglong(&n);	scanlonglong(&c);
	long long arr[n];
	for(i=0;i<n;i++)
		scanlonglong(&arr[i]);
	/*mergesort(arr,n);
	for(i=0;i<n;i++)
	{
		if(i<n/2)
			arr[i]-=c;
		else
			arr[i]+=c;
	}*/
	sum = 0;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(arr[i]>arr[j])
				sum+=(arr[i]-arr[j]);
			else
				sum+=(arr[j]-arr[i]);
	if(n%2==0)
		sum+=(n/2)*n*c;
	else
		sum+=((n/2)*(n-1)*c);
	cout<<sum<<endl;
	return 0;
}