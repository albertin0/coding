#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif
#include <iostream>
#include <stdio.h>
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
   x = (x<<1) + (x<<3) + c - 48;//x*10+(ASCII or UTF-8 value of new char c-48);
 }
 *y = x;
}
int main()
{
	int t,n,i,sum,lim;
	scanint(&t);
	while(t--)
	{
		scanint(&n);
		sum = 1;
		lim = (int)(sqrt(n));
		if((double)lim != sqrt(n))
			lim++;
		for(i=2;i<lim;i++)
		{
			if(n%i==0)
				sum+=(i+(n/i));
		}
		printf("%d\n",sum);
	}
	return 0;
}