#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif

#define P 1000000007
#include <stdio.h>

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
	long long T,N,x,M,c,i;
	scanlonglong(&T);
	while(T--)
	{
		scanlonglong(&N);
		scanlonglong(&x);
		scanlonglong(&M);
		long long in[N+1];
		for(i=1;i<=N;i++)
		{
			scanlonglong(&in[i]);
			if(in[i]>=P)
				in[i] %= P;
		}
		if(x>1)
		{	
			for(c=1;c<=M;c++)
			{
				for(i=2;i<=x;i++)
				{
					in[i] += in[i-1];
					if(in[i]>=P)
						in[i] %= P;
				}
			}
		}
		printf("%lld\n",in[x]);
	}
	return 0;
}