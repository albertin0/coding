#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif

#include <stdio.h>
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
	int t,m,n,i,j;
	scanint(&t);
	scanint(&m);
	nt(&m);
	
}
