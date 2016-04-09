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
   x = (x<<1) + (x<<3) + c - 48;
 }
 *y = x;
}

int main()
{
	int t,n,i,k;
	scanint(&t);
	while(t--)
	{
		scanint(&n);
		for(i=0;i<n;i++)
			scanint(&k);
		n==1? printf("1\n"):printf("2\n");
	}
	return 0;
}
