#include<stdio.h>
#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
   if (r > l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle itself
        if (arr[mid] == x)  return mid;
 
        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] < x) return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not present in array
   if(r==l)
   return l;
}

int main()
{
	int t,p,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>p;
		int a[n],i;
		for(i=0;i<n;i++)
			cin>>a[i];
		int size = sizeof(a)/ sizeof(a[0]);
	   	//int x = 10;
	   	int result = binarySearch(a, 0, size-1, p);
	   	cout<<result;
   	}
   	return 0;
}