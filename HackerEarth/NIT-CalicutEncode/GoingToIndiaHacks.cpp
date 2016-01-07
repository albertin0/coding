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
#define P 1000000007
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
	int t,a,b,c,d,i,j,row,column,arr1,arr2;
	long long arr[2][1003];
	scanint(&t);
	while(t--)
	{
		scanint(&a);	scanint(&b);	scanint(&c);	scanint(&d);
		row = d-b;	//0 to d-b
		column = c-a;	//0 to c-a
		arr1 = 0;
		arr2 = 1;
		for(i=0;i<=column;i++)
			arr[arr1][i] = 1;
		while(row--)//runs row-1 times
		{
			if(arr1==1)
			{	arr1 = 0;	arr2 = 1;	}
			else
			{	arr1 = 1;	arr2 = 0;	}
			arr[arr1][0] = 1;
			for(i=1;i<=column;i++)
				arr[arr1][i] = (arr[arr1][i-1] + arr[arr2][i-1] + arr[arr2][i]) % P;			
		}
		cout<<arr[arr1][column]<<endl;
	}
	return 0;
}