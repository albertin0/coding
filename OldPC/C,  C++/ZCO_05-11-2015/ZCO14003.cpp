#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
// Function to Merge Arrays L and R long longo A. 
// lefCount = number of elements in L
// rightCount = number of elements in R. 
void Merge(long long *A,long long *L,long long leftCount,long long *R,long long rightCount) {
	long long i,j,k;

	// i - to mark the index of left aubarray (L)
	// j - to mark the index of right sub-raay (R)
	// k - to mark the index of merged subarray (A)
	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];
}

// Recursive function to sort an array of long longegers. 
void MergeSort(long long *A,long long n) {
	long long mid,i, *L, *R;
	if(n < 2) return; // base condition. If the array has less than two element, do nothing. 

	mid = n/2;  // find the mid index. 

	// create left and right subarrays
	// mid elements (from index 0 till mid-1) should be part of left sub-array 
	// and (n-mid) elements (from mid to n-1) will be part of right sub-array
	L = (long long*)malloc(mid*sizeof(long long)); 
	R = (long long*)malloc((n- mid)*sizeof(long long)); 
	
	for(i = 0;i<mid;i++) L[i] = A[i]; // creating left subarray
	for(i = mid;i<n;i++) R[i-mid] = A[i]; // creating right subarray

	MergeSort(L,mid);  // sorting the left subarray
	MergeSort(R,n-mid);  // sorting the right subarray
	Merge(A,L,mid,R,n-mid);  // Merging L and R long longo A as sorted list.
        free(L);
        free(R);
}
int main()
{
	long long n,i;
	cin>>n;
	long long arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	MergeSort(arr, n);//MergeSort(arr,0,n-1);
	long long max=0;
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i]*(n-i);
		max = max<arr[i]?arr[i]:max;
	}
	cout<<max;
	return 0;
}