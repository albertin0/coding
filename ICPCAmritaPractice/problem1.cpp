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
	int n, sum=0, k;
	scanint(&n);
	while(n--)
	{
		scanint(&k);
		sum+=k;
	}
	scanint(&k);
	if(sum<=k)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}