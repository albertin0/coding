#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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

void Merge(int *A,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;

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

// Recursive function to sort an array of integers. 
void MergeSort(int *A,int n) {
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

	MergeSort(L,mid);  // sorting the left subarray
	MergeSort(R,n-mid);  // sorting the right subarray
	Merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.
        free(L);
        free(R);
}

typedef struct node
{
	int val;	node *next;
} node;
int main()
{
	int n,i;
	node *ptr,*prev,*head,*temp;
	scanint(&n);
	int arr[n];
	scanint(&arr[0]);
	ptr = (node*)malloc(sizeof(node));
	ptr->val = arr[0];
	head = ptr;
	prev = ptr;
	for(i=1;i<n;i++)
	{
		scanint(&arr[i]);
		ptr = (node*)malloc(sizeof(node));
		prev->next = ptr;
		ptr->val = arr[i];
		prev = ptr;
	}
	prev->next = head;		//circular linked list
	ptr = prev= head;
	int m,k=n;
	scanint(&m);
	//for(i=0;i<n;i++)
	//{	cout<<ptr->val;	ptr=ptr->next;	}
	//cout<<endl;
	while(k>1)//runs till only  1 element is left
	{
		for(i=1;i<=m-1;i++)
		{	
			prev = ptr;
			ptr = ptr->next;
		}
		//cout<<prev->val<<"  "<<ptr->val<<endl;
		temp = ptr;
		prev->next = ptr->next;
		ptr = ptr->next;
		//cout<<"new ptr"<<ptr->val<<endl;
		free(temp);
		k--;
	}
	//for(i=0;i<n;i++)
	//{	cout<<ptr->val;	ptr=ptr->next;	}
	//cout<<ptr->val<<endl;
	MergeSort(arr,n);
	bool even = ptr->val%2?true:false;
	if(even)
		for(i=0;i<n;i++)
			if(arr[i]%2==0)
				cout<<arr[i]<<" ";
	else
		for(i=0;i<n;i++)
			if(arr[i]%2!=0)
				cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}