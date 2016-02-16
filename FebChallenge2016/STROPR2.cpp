#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif

#define P 1000000007
#include <stdio.h>
#include <string.h>

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
	long long T,N,x,M,c,i,val,temp;
	scanlonglong(&T);
	while(T--)
	{
		scanlonglong(&N);
		scanlonglong(&x);
		scanlonglong(&M);
		long long in[N+1];
		long long dp[x+1];
		//memset(dp,0,sizeof(dp));
		for(i=0;i<=x;i++)
			dp[i] = 1;//printf("%lld  ",dp[i]);//cout<<dp[i]<<" ";
		//printf("\n");
		for(i=2;i<=M;i++)
			for(c=2;c<=x;c++)
			{
				dp[c]+=dp[c-1];
				if(dp[c]>=P)
					dp[c] %= P;
			}
		val = 0;
		//for(i=1;i<=x;i++)
		//	printf("%lld  ",dp[i]);//cout<<dp[i]<<" ";
		//printf("\n");//cout<<endl;
		for(i=1;i<=N;i++)
		{
			scanlonglong(&in[i]);
			if(in[i]>=P)
				in[i] %= P;
		}
		if(x>1)
		{	
			/*for(c=1;c<=M;c++)
			{
				for(i=2;i<=x;i++)
				{
					in[i] += in[i-1];
					if(in[i]>=P)
						in[i] %= P;
				}
			}*/
			for(i=x;i>=1;i--)
			{
				temp = (dp[i]*in[x-i+1]);
				if(temp>=P)
					temp %= P;
				val += temp;
				if(val>=P)
					val %= P;
			}
		}
		else
			val = in[x];
		printf("%lld\n",val);
	}
	return 0;
}