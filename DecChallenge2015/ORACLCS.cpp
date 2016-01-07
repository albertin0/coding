#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif
#include <iostream>
#include <stdio.h>
#include <string.h>
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
	int t,mina,minb,n,noa,nob,i;
	string s;
	scanint(&t);	
	while(t--)
	{
		scanint(&n);
		cin>>s;
		mina = minb = s.length();
		while(n--)
		{
			noa = nob = 0;
			for(i=0;i<s.length();i++)
				if(s[i]=='a')
					noa++;
				else
					nob++;
			if(noa<mina)
				mina = noa;
			if(nob<minb)
				minb = nob;
			if(n>0)
				cin>>s;
		}
		if(minb<mina)
			cout<<minb<<endl;
		else
			cout<<mina<<endl;
	}
	return 0;
}