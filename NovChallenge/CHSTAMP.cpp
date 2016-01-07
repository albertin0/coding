#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// Function to Merge Arrays L and R into A. 
// lefCount = number of elements in L
// rightCount = number of elements in R. 

void Merge(int **A,int **L,int leftCount,int **R,int rightCount) {
	int i,j,k;
	// i - to mark the index of left aubarray (L)
	// j - to mark the index of right sub-raay (R)
	// k - to mark the index of merged subarray (A)
	i = 0; j = 0; k =0;
	while(i<leftCount && j< rightCount) //LEXICOGRAPHIC SORTING
	{
		if(L[i][0]==R[j][0])
		{
			if(L[i][1]==R[j][1])
			{
				if(L[i][2]<R[j][2])
				{
					A[k++][0] = L[i++][0];//whole row is copied
					A[k++][1] = L[i++][1];
					A[k++][2] = L[i++][2];
				}
				else
				{
					A[k++][0] = R[i++][0];//whole row is copied
					A[k++][1] = R[i++][1];
					A[k++][2] = R[i++][2];
				}
			}
			else
			{
				if(L[i][1]<R[j][1])
				{
					A[k++][0] = L[i++][0];//whole row is copied
					A[k++][1] = L[i++][1];
					A[k++][2] = L[i++][2];
				}
				else
				{
					A[k++][0] = R[i++][0];//whole row is copied
					A[k++][1] = R[i++][1];
					A[k++][2] = R[i++][2];
				}
			}
		}
		else
		{
			if(L[i][0] < R[j][0]) 
			{
				A[k++][0] = L[i++][0];//whole row is copied
				A[k++][1] = L[i++][1];
				A[k++][2] = L[i++][2];
			}
			else
			{
				A[k++][0] = R[i++][0];//whole row is copied
				A[k++][1] = R[i++][1];
				A[k++][2] = R[i++][2];
			}
		}
	}
	while(i < leftCount)
	{
		A[k++][0] = L[i++][0];//whole row is copied
		A[k++][1] = L[i++][1];
		A[k++][2] = L[i++][2];
	}
	while(j < rightCount)
	{
		A[k++][0] = R[i++][0];//whole row is copied
		A[k++][1] = R[i++][1];
		A[k++][2] = R[i++][2];
	}
}

// Recursive function to sort an array of integers. 
void MergeSort(int **A,int n) {
	int mid,i, **L, **R;
	if(n < 2) return; // base condition. If the array has less than two element, do nothing. 

	mid = n/2;  // find the mid index. 

	// create left and right subarrays
	// mid elements (from index 0 till mid-1) should be part of left sub-array 
	// and (n-mid) elements (from mid to n-1) will be part of right sub-array
	L = (int**)malloc(mid*sizeof(int*));
	for(i=0;i<mid;i++) 	L[i] = (int*)malloc(3*sizeof(int));

	R = (int**)malloc((n- mid)*sizeof(int*));
	for(i=0;i<n-mid;i++) 	R[i] = (int*)malloc(3*sizeof(int));
	
	for(i = 0;i<mid;i++)
	{
		L[i][0] = A[i][0];
		L[i][1] = A[i][1];
		L[i][2] = A[i][2];
	}
	//L[i] = A[i]; // creating left subarray
	for(i = mid;i<n;i++)
	{
		R[i-mid][0] = A[i][0]; // creating right subarray
		R[i-mid][1] = A[i][1];
		R[i-mid][2] = A[i][2];
	}

	MergeSort(L,mid);  // sorting the left subarray
	MergeSort(R,n-mid);  // sorting the right subarray
	Merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.
        free(L);
        free(R);
}

int main() {
	/* Code to test the MergeSort function. */
	
	int i,numberOfElements,j;
	int **A = (int**)malloc(4*sizeof(int*));
	for(i=0;i<3;i++)	A[i] = (int*)malloc(3*sizeof(int));
	int B[4][3] = {{1,4,3},{1,1,3},{2,6,22},{3,5,8}}; // creating an array of integers. 
	for(i=0;i<4;i++)
		for(j=0;j<3;j++)
			A[i][j] = B[i][j];

	// finding number of elements in array as size of complete array in bytes divided by size of integer in bytes. 
	// This won't work if array is passed to the function because array
	// is always passed by reference through a pointer. So sizeOf function will give size of pointer and not the array.
	// Watch this video to understand this concept - http://www.youtube.com/watch?v=CpjVucvAc3g  
	numberOfElements = 4; 

	// Calling merge sort to sort the array. 
	MergeSort(A,numberOfElements);

	//printing all elements in the array once its sorted.
	for(i = 0;i < numberOfElements;i++) 
	{
		for(j=0;j<3;j++)
			printf("%d ",A[i][j]);
		printf("\n");
	}
	free(A);
	return 0;
}

