#include<stdio.h>
#include<stdlib.h> 
int a[20000];

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

void InsertionSort(int *a, int len)
{
	int i,j,key;
	for(i=1;i<len;i++)
	{
		key=a[i];	j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j--;
			printf("\n  j=%d    i=%d",j,i);
		}
		a[j+1] = key;
	}
}


int main()
{
	int t,n,m,i,cuts,temp,m2;
	scanf("%d",&t);
	while(t--)
	{		
		scanf("%d %d", &n, &m);		
		for(i =0; i<m; i++)
		{
			scanf("%d", &a[i]);
		}
		InsertionSort(a,m);
		printf("\n\n  %d %d %d %d",a[0],a[1],a[2],a[3]);
		i=0; m2=m;
		cuts =0;
		while(i<m && m2>1)
		{
			if(a[i]+2<=m2)
			{
				cuts += a[i];
				m2 -= a[i]+1;
				printf("\nif(des<=m2)  cuts:%d  m2:%d",cuts,m2);
			}
			else
			{
				cuts += m2-1;
				m2 =1;
				printf("\nelse:  cuts:%d  m2:%d",cuts,m2);
			}
			i++;
		}
		printf("\n%d", cuts);
	}
	return 0;
}
