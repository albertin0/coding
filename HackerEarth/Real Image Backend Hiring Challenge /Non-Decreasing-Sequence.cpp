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
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, temp, n, l, i, j ,min;
	scanint(&t);
	while(t--)
	{
		scanint(&n);
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		cin>>l;
		min = 10000000;
		//if(l==0 || l>n)
		for(i=n-1;i>=1;i--)
		{
			temp=0;
			for(j=i-1;j>=0+l-1;j--)
			{
				if(arr[j]<=arr[i])
				{
					temp++;
				}
				if(temp==l)
					break;
			}
			if(temp==l&&arr[i]<min)
				min = arr[i];
		}
		if(min==10000000)
			cout<<"-1\n";
		else
			cout<<min<<endl;
	}
	return 0;
}
