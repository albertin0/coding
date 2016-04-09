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
int main()
{
	int n,k,u,q,x,y,a,b;
	scanint(&n);
	scanint(&k);
	scanint(&u);
	scanint(&q);
	int array[n][n];
	for(int i =0; i<n; i++){
		for(int j=0;j<n;j++)
		array[i][j]=1;
	}
	for(int i=0;i<u;i++){
		scanint(&x);
		scanint(&y);
		x--;
		y--;
		array[x][y]=0;
		for(int j=1;j<=k;j++){
			if(x+j<=n-1)
				array[x+j][y]=0;
			if(y+j<=n-1)
				array[x][y+j]=0;
			if(x-j>=0)
				array[x-j][y]=0;
			if(y-j>=0)
				array[x][y-j]=0;
			if(2*j<=k){
				if(x+j<=n-1&&y+j<=n-1)
					array[x+j][y+j]=0;
				if(x-j>=0&&y-j>=0)
					array[x-j][y-j]=0;
				if(x-j>=0&&y+j<=n-1)
					array[x-j][y+j]=0;
				if(x+j<=n-1&&y-j>=0)
					array[x+j][y-j]=0;
			}
		}
	}
		scanint(&x);
		scanint(&y);
		scanint(&a);
		scanint(&b);
		for(int i=0; i<q; i++){
			if(!array[x-1][y-1]){
				cout<<"Not Safe\n";
				x=(((x*a)+b)%n)+1;
				y=(((y*a)+b)%n)+1;
			}
			else{
				cout<<"Safe\n";
				x=(((x*b)+a)%n)+1;
				y=(((y*b)+a)%n)+1;
			}
		}

	return 0;
}