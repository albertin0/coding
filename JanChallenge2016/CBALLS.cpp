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
	int t,n,i,j,k,temp,balls,max,minballs,temp2;
	scanint(&t);
	int prime[1229];//since 1229 prime nos from [2,10000]
	bool isPrime = true;
	k=0;
	for(i=2;i<10000;i++)
	{
		isPrime = true;
		for(j=2;j<=sqrt(i);j++)
			if(i%j==0)
				isPrime = false;
		if(isPrime)
			prime[k++] = i;
	}
	//int test[1229],testi;
	while(t--)
	{
		scanint(&n);
		int arr[n];
		max=0;
		balls=0;
		minballs=P;
		for(i=0;i<n;i++)
		{
			scanint(&arr[i]);
			if(arr[i]<max)
			{
				balls+=max-arr[i];
				arr[i] = max;
			}
			else
				max = arr[i];
		}/*
		for(i=0;i<n;i++)
			cout<<arr[i]<<"  ";
		cout<<"\n\n";
		for(i=0;i<1229;i++)
			cout<<prime[i]<<"  ";
		cout<<"\n\n";*/
		for(i=0;prime[i]<=max&&i<1229;i++)
		{
			temp = 0;
			for(j=0;j<n;j++)
			{
				temp2 = arr[j]%prime[i];
				if(temp2!=0)
					temp+=(prime[i]-temp2);
			}
			if(temp<minballs)
				minballs = temp;
			//cout<<"   "<<temp<<"    "<<endl;
		}
		balls+=minballs;
		cout<<balls<<endl;
	}
	return 0;
}	