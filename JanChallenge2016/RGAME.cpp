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

//#define long long unsigned long long
//#define P 1000000007

long long PowMod(long long n)
{
    long long ret = 1;
    long long a = 2;
    while (n > 0) {
        if (n & 1) ret = ret * a % P;
        a = a * a % P;
        n >>= 1;
    }
    return ret;
}

int main()
{
	long long t,n,i,j,k,prod,result;
	scanlonglong(&t);
	long long power[100000];
	memset(power,-1,sizeof(power));
	power[0]=1;

	/*for(i=1;i<100000;i++)
		power[i] = (power[i-1]*2)%P;
		*/
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
					//prod %=P;
				}
				else
				{
					/*for(k=1;k<=j;k++)
					{
						prod*=2;
						prod %= P;
					}*/
					if(power[j]==-1)
						power[j] = PowMod(j);
					
					prod*=power[j];
					prod %= P;
				}
				/*for(k=1;k<=n-i;k++)
				{
					prod*=2;
					prod %= P;
				}*/
				if(power[n-i]==-1)
					power[n-i] = PowMod(n-i);

				prod *= power[n-i];
				//prod %= P;
				result += prod;
				result %= P;
			}
		}
		cout<<result<<endl;
	}
	return 0;
}