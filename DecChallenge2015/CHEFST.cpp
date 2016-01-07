#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif
//#include <iostream>
#include <stdio.h>

//using namespace std;

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
}


int main()
{
	long long t,n1,n2,m,minn,ans;
	scanlong(&t);
	while(t--)
	{
		scanlong(&n1);	scanlong(&n2);	scanlong(&m);

		m = (m*(m+1))/2;
		if(n1<=n2)
			minn = n1;
		else
			minn = n2;
		if(minn<=m)
		{
			n1 -= minn;
			n2 -= minn;
			ans = n1+n2;
		}
		else
		{
			n1 -= m;
			n2 -= m;
			ans = n1+n2;
		}
		printf("%lld\n",ans);
	}
	return 0;
}