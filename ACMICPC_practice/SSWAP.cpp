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
	string in;
	int t,d,i,j,k;
	scanint(&t);
	while(t--)
	{
		cin>>in;
		scanint(&d);
		int len= in.length();
		string ans = "";
		for(i=d-1;i<len;i++)
			ans+=(in[i]);
		if((len-d+1)%2==0)
			for(i=0;i<d-1;i++)
				ans+=in[i];
		else
			for(i=d-2;i>=0;i--)
				ans+=in[i];
		cout<<ans<<endl;
	}
	return 0;
}