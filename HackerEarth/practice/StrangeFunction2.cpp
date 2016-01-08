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
	int n,c,i,j,count;
	long long sum;
	scanint(&n);	scanint(&c);
	int arr[1000001];
	memset(arr,0,sizeof(arr));
	for(i=0;i<n;i++)
	{
		scanint(&j);
		arr[j]=1;
	}
	sum = 0;
	j=0;count = 0;
	for(i=0;i<=1000001;i++)
	{
		if(arr[i]==1 && j!=0)
		{
			sum+=(long long)(count+1)*(n-j);
			j++;
			count =0;
		}
		else if(arr[i]==1 && j==0)
			j++;
		else if(j>0)
			count++;
	}

	/*mergesort(arr,n);
	for(i=0;i<n;i++)
	{
		if(i<n/2)
			arr[i]-=c;
		else
			arr[i]+=c;
	}*/
	/*sum = 0;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(arr[i]>arr[j])
				sum+=(arr[i]-arr[j]);
			else
				sum+=(arr[j]-arr[i]);
	*/
	if(n%2==0)
		sum+=(long long)(n/2)*n*c;
	else
		sum+=(long long)((n/2)*(n-1)*c);
	cout<<sum<<endl;
	return 0;
}