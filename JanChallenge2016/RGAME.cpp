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
#define P 1000000007
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
	long long t,n,i,j,k,prod,result;
	scanlonglong(&t);
	while(t--)
	{
		scanlonglong(&n);
		long long arr[n+1];
		result = 0;
		for(i=0;i<=n;i++)
		{
			scanlonglong(&arr[i]);
			//prod = 1;
			for(j=0;j<i;j++)
			{
				prod = arr[i]*arr[j];
				prod %= P;
				if(j==0)
				{
					prod*=2;
					prod %=P;
				}
				else
				{
					for(k=1;k<=j;k++)
					{
						prod*=2;
						prod %= P;
					}
				}
				for(k=1;k<=n-i;k++)
				{
					prod*=2;
					prod %= P;
				}
				result += prod;
				result %= P;
			}
		}
		cout<<result<<endl;
	}
	return 0;
}