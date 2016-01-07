#include<stdio.h>
#include<stdlib.h>
void Merge(int **A,int **L,int leftCount,int **R,int rightCount) {
	int i,j,k;
	// i - to mark the index of left aubarray (L)
	// j - to mark the index of right sub-raay (R)
	// k - to mark the index of merged subarray (A)
	i = 0; j = 0; k =0;
	while(i<leftCount && j< rightCount) {
		if(L[i][0]  < R[j][0]){ A[k+1][1] = L[i+1][1]; A[k++][0] = L[i++][0]; } 
		else{ A[k+1][1] = R[j+1][1]; A[k++][0] = R[j++][0]; }
	}
	while(i < leftCount){ A[k+1][0] = L[i+1][0]; A[k++][1] = L[i++][1]; }
	while(j < rightCount){ A[k+1][0] = R[j+1][0]; A[k++][1] = R[j++][1]; }
}
// Recursive function to sort an array of integers. 
void MergeSort(int **A,int n) {
	int mid,i;
	if(n < 2) return; // base condition. If the array has less than two element, do nothing. 

	mid = n/2;  // find the mid index. 

	// create left and right subarrays
	// mid elements (from index 0 till mid-1) should be part of left sub-array 
	// and (n-mid) elements (from mid to n-1) will be part of right sub-array
	//int(*L)[2] = malloc(mid*sizeof(*L)); 
	//int(*R)[2] = malloc((n- mid)*sizeof(*R)); 
	int L[mid][2],R[n-mid][2];
	//prototype:int(*array)[10] = malloc((sizeof *array) * 5);
	
	for(i = 0;i<mid;i++){ L[i][0] = A[i][0]; 	L[i][1] = A[i][1]; }// creating left subarray
	for(i = mid;i<n;i++){ R[i-mid][0] = A[i][0]; 		R[i-mid][1] = A[i][1];	}// creating right subarray

	MergeSort(L,mid);  // sorting the left subarray
	MergeSort(R,n-mid);  // sorting the right subarray
	Merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.
        free(L);
        free(R);
}

/*int main() {
	/* Code to test the MergeSort function. 
	
	int A[] = {6,2,3,1,9,10,15,13,12,17}; // creating an array of integers. 
	int i,numberOfElements;

	// finding number of elements in array as size of complete array in bytes divided by size of integer in bytes. 
	// This won't work if array is passed to the function because array
	// is always passed by reference through a pointer. So sizeOf function will give size of pointer and not the array.
	// Watch this video to understand this concept - http://www.youtube.com/watch?v=CpjVucvAc3g  
	numberOfElements = sizeof(A)/sizeof(A[0]); 

	// Calling merge sort to sort the array. 
	MergeSort(A,numberOfElements);

	//printing all elements in the array once its sorted.
	for(i = 0;i < numberOfElements;i++) printf("%d ",A[i]);
	return 0;
}*/

int a[20000];
int main()
{
	int t,n,m,i,j,dist,ans,temp,key,val;
	scanf("%d",&t);
	while(t--)
	{		
		scanf("%d %d", &n, &m);		
		int b[m][2];	dist=0;
		for(i =0; i<m; i++)
		{
			b[i][0]=b[i][1]=0;
			scanf("%d", &a[i]);
			for(j=0;j<=i;j++)
			{
				if(b[j][0]==0)
				{
					b[j][0]=a[i]; 
					dist++;
				}
				if(b[j][0]==a[i])
				{
					b[j][1]++;
					break;
				}
			}
		}
		/*for(i=0;i<dist;i++)
		{
			for(j=0;j<dist-i-1;j++)
				if(b[j][0]>b[j+1][0])
				{
					temp=b[j][0];
					b[j][0]=b[j+1][0];
					b[j+1][0]=temp;
					temp=b[j][1];
					b[j][1]=b[j+1][1];
					b[j+1][1]=temp;
				}
		}*/
		//for(i=0;i<dist;i++)
		//	printf("  %d no(%d)",b[i][0],b[i][1]);
		//printf("\n%d\n",dist);
		/*for(i=1;i<dist;i++)
		{
			j=i;	key=b[i][0];	val=b[i][1];
			while(j>=0 && b[j-1][0]>key)
			{
				b[j][0]=b[j-1][0];
				b[j][1]=b[j-1][1];
				j=j-1;
			}
			b[j][0]=key;	b[j][1]=val;
		}
		//MergeSort(A,numberOfElements);*/
		MergeSort(b,dist);


		//for(i=0;i<dist;i++)
		//	printf("  %d no(%d)",b[i][0],b[i][1]);
		ans=0;
		for(i=0;i<dist && m>1;i++)
		{
			if(b[i][0]!=0)
			{
				if((b[i][1]*(b[i][0]+1)+1)<=m)
				{
					ans += b[i][1]*b[i][0];
					m -= b[i][1]*(b[i][0]+1);
				}
				else if(b[i][0]<m)
				{
					temp = (m-1)/(b[i][0]+1);
					ans += temp*b[i][0];
					m -= temp*(b[i][0]+1);
				}
			}
			if(i==dist-1 && m>1)
			{
				ans += m-1;
				m=1;
			}
		}
		printf("\n%d",ans);
	}
	return 0;
}