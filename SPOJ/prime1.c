#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif

#include <stdio.h>
#include <math.h>
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
	int t,m,n,j,isPrime;
	int i;
	scanint(&t);
	while(t--)
	{
		scanint(&m); scanint(&n);
		for(i=m;i<=n;i++)
		{
			isPrime=1;
			for(j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{	isPrime=0; break;	}
			}
			if(isPrime)
				printf("%d\n",i);
		}
		putchar('\n');
		//printf("\n");
	}
	return 0;
}
