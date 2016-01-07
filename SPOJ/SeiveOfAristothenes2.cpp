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
		for(i=2;i<=(int)sqrt(n);i++)
		{
			for(j=0;j+m<=n;j++)
			{
				if(check[j])
				{
					if(j+m<=1)
						check[j] = false;
					else
					{
						if((j+m)%i==0)
						{
							if(j+m!=i)
								check[j]=false;
							for(k=(long)j+(long)i;k<=(long)n;k+=(long)i)
								check[(int)k]=false;
							goto nextChecker;
						}
					}
				}
			}
			nextChecker:;
		}
		for(i=0;i+m<n;i++)
			if(check[i])
				cout<<m+i<<endl;
		cout<<endl;
	}
	return 0;
}