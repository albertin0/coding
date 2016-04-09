#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif

#include <iostream>
#include <stdio.h>
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

int fun(int x,int y,int n,int m){
	if(n==0){
	if(x>=1&&x<=m&&y>=1&&y<=m)
		return 1;
	else
		return 0;
}
	if(x>m||y>m||x<1||y<1)
		return 0;
	else{
		return fun(x+1,y,n-1,m)+fun(x+1,y+1,n-1,m)+fun(x,y+1,n-1,m)+fun(x-1,y+1,n-1,m)+fun(x-1,y,n-1,m)+fun(x-1,y-1,n-1,m)+fun(x,y-1,n-1,m)+fun(x+1,y-1,n-1,m);
	}

}

int main()
{
	int t,n,m,x,y;
	scanint(&t);
	while(t--){
		scanint(&m);
		scanint(&x);
		scanint(&y);
		scanint(&n);
		cout<<fun(x,y,n,m)<<"\n";
	}
return 0;
}