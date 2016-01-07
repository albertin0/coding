#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstring>

using namespace std;
void scanll(long long *y)
{
 register long long c = gc();
 register long long x = 0;
 for(;(c<48 || c>57);c = gc())
  ;
 for(;c>47 && c<58;c = gc())
 {
   x = (x<<1) + (x<<3) + c - 48;//x*10+(ASCII or UTF-8 value of new char c-48);
 }
 *y = x;
}
long long feven(long long a) {
     long long res[] = {a,2,a+2,0};
     return res[a%4];
}
long long fodd(long long a) {
     	long long res;
     if(a>0)
     	res = feven(a-1);
     else
     	res = 0;
     return res^a;
}
int main()
{
	long long x,k,m,i,t,ans;
	scanll(&t);
	while(t--)
	{
		scanll(&x);	scanll(&m);
		if(x%2==0)
		{	k = feven(x);
			if((x+2*m-2)%2==0)
				i = feven((x+2*m-2));
			else
				i = feven((x+2*m-2-1));
		}
		else
		{	k = fodd(x);
			//k = feven(x);
			if((x+2*m-2)%2==0)
				i = fodd((x+2*m-2-1));
			else
				i = fodd((x+2*m-2-1));
		}
		ans = k^i;
		if(ans==0)
			printf("BOB\n");
		else
		{
			exit:
			printf("ALICE\n");
		}
	}
	return 0;
}
