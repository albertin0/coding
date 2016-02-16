#include <iostream>


#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Function to Merge Arrays L and R into A. 
// lefCount = number of elements in L
// rightCount = number of elements in R. 
void Merge(int *A,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;

	// i - to mark the index of left aubarray (L)
	// j - to mark the index of right sub-raay (R)
	// k - to mark the index of merged subarray (A)
	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(L[i]  > R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];
}

// Recursive function to sort an array of integers. 
void mergeSortDesc(int *A,int n) {
	int mid,i, *L, *R;
	if(n < 2) return; // base condition. If the array has less than two element, do nothing. 

	mid = n/2;  // find the mid index. 

	// create left and right subarrays
	// mid elements (from index 0 till mid-1) should be part of left sub-array 
	// and (n-mid) elements (from mid to n-1) will be part of right sub-array
	L = (int*)malloc(mid*sizeof(int)); 
	R = (int*)malloc((n- mid)*sizeof(int)); 
	
	for(i = 0;i<mid;i++) L[i] = A[i]; // creating left subarray
	for(i = mid;i<n;i++) R[i-mid] = A[i]; // creating right subarray

	mergeSortDesc(L,mid);  // sorting the left subarray
	mergeSortDesc(R,n-mid);  // sorting the right subarray
	Merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.
        free(L);
        free(R);
}

int main()
{
	int t,i,j,temp,n,k,m,wp,bp,ans;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>m;
		int ab[n],w[k],b[m];
		for(i=0;i<n;i++)//for A
			cin>>ab[i];
		for(i=0;i<n;i++)//for diff
		{
			cin>>j;
			ab[i] -= j;
		}
		mergeSortDesc(ab,n);
		for(i=0;i<k;i++)
			cin>>w[i];
		mergeSortDesc(w,k);
		for(i=0;i<m;i++)
			cin>>b[i];
		mergeSortDesc(b,m);
		ans=wp=bp=0;
		/*
		for(i=0;i<m;i++)
			cout<<b[i]<<"  ";
		cout<<endl;
		for(i=0;i<k;i++)
			cout<<w[i]<<"  ";
		cout<<endl;
		for(i=0;i<n;i++)
			cout<<ab[i]<<"  ";
		cout<<endl;
		*/
		for(i=0;i<n&&(wp<k || bp<m);i++)
		{
			while(w[wp]>ab[i] && wp<k)
				wp++;
			while(b[bp]>ab[i] && bp<m)
				bp++;
			if(wp<k && bp<m)
			{
				if(ab[i]-w[wp]<ab[i]-b[bp])
				{
					//cout<<"ab["<<i<<"] selected="<<ab[i]<<endl;
					//cout<<"w selected ="<<w[wp]<<endl;
					ans += (ab[i] - w[wp]);
					wp++;
				}
				else
				{
					//cout<<"ab["<<i<<"] selected="<<ab[i]<<endl;
					//cout<<"b selected ="<<b[bp]<<endl;
					ans += (ab[i] - b[bp]);
					bp++;
				}
			}
			else if(wp<k)
			{
				//cout<<"ab["<<i<<"] selected="<<ab[i]<<endl;
				//cout<<"w selected ="<<w[wp]<<endl;
				ans += (ab[i] - w[wp]);
				wp++;
			}
			else if(bp<m)
			{
				//cout<<"ab["<<i<<"] selected="<<ab[i]<<endl;
				//cout<<"b selected ="<<b[bp]<<endl;
				ans += (ab[i] - b[bp]);
				bp++;
			}
		}
		while(i<n)
		{
			//cout<<"ab["<<i<<"] selected="<<ab[i]<<endl;
			ans += ab[i++];
		}
		cout<<ans<<endl;
	}
	return 0;
}