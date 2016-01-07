#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	//for memset()
#include <math.h>	//for fabs()
#define P 1000000000.0
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

int call(int n,int m1,int m2,int state)
{
	state *=-1;
	if(n<m1)
		return state*-1;
	else
	{
		int temp1=0,temp2=0;
		if(n>=m1&&m1!=0)
			temp1 = call(n-m1,m1,m2,state);
		if(m1==0)
			temp1 = state*-1;
			
		if(n>=m2&&m2!=0)
			temp2 = call(n-m2,m1,m2,state);
		if(m2==0)
			temp2 = state*-1;
			
		if(temp1==state || temp2==state)
			return state;
		else
			return state*-1;
	}
}
int main()
{
	int t,n,m1,m2,state;
	scanint(&t);
	while(t--)
	{
		scanint(&n);	scanint(&m1);	scanint(&m2);
		state = -1;	//1 is for jerry and -1 for tom
		if(call(n,m1,m2,state)==1)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}
