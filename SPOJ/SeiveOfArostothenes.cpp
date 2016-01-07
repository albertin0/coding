#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

void scanint(int *y)
{
 register int c = gc();
 register int x = 0;
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
	int t,j,m,n,i;
	long k;
	scanint(&t);
	while(t--)
	{
		scanint(&m);	scanint(&n);
		bool check[100001];
		memset(check,true,sizeof(check));
		bool primeset[100001];//nos from 0 to 100000
		memset(primeset,true,sizeof(primeset));
		for(i=2;i<=(int)sqrt(n);i++)//since n,max = 10^9 so n^1/2,max = 10^4.5; // seive of aristothenese algo
		{
			if(primeset[i])
			{
				for(j=i+i;j<=sqrt(n);j+=i)
					primeset[j] = false;
			}
		}// prime nos. b/w 2 to sqrt(n)

		for(j=0;m+j<=n;j++)// j=0 represents m;
/*...*/	{
			if(j+m==1)
			{	check[j]=false;		continue;	}
			if(check[j])
/*...*/		{
				for(i=2;i<=(int)sqrt(n);i++)
/*...*/			{	
					if(primeset[i])
/*...*/				{
						if((m+j)%i==0 && m+j!=i)// m+j is the actual no.
/*...*/					{
							check[j] = false;
/*...*/						for(k = (long)j+(long)i;k<=(long)n;k+=(long)i)
								check[(int)k] = false;
							//goto endPrimesetLoop;
						}
					}
				}
			}
			//endPrimesetLoop:;
		}
		for(j=0;m+j<=n;j++)//m to n
		{
			if(check[j])
				cout<<m+j<<endl;
		}
		/*for(i=2;i<=(int)sqrt(n);i++)
		{
			if(primeset[i])
				cout<<i<<" ";
		}*/
		cout<<endl;
	}
	return 0;
}