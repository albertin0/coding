        #ifndef ONLINE_JUDGE
            #define gc getchar
        #else
            #define gc getchar_unlocked
        #endif
         
         
        #include <stdio.h>
        #include <stdlib.h>
         
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
        
int binarySearchModified(int arr[], int l, int r, int x)
{
  while (r-l>=2)
  {
    int m = l + (r-l)/2;
 
    if (arr[m] == x) return m;  // Check if x is present at mid
 
    if (arr[m] < x) l = m + 1; // If x greater, ignore left half
 
    else r = m - 1; // If x is smaller, ignore right half
  }
  if(r-l<2)
  {
    if(x==arr[r]) return r;
    if(x==arr[l]) return l;
    if(x<arr[r]) 
    {
      if(x<arr[l])
        return l;// x<l<r
      else
        return r;//returns index of array smaller than x., l<x<r
    }
    else
      return r+1;
  }
  //return -1; // if we reach here, then element was not present, we have modified the bs if elment is not present.
} 
void Merge(int *A,int *B,int *L1,int *L2,int leftCount,int *R1,int *R2,int rightCount) {
    int i,j,k;

    // i - to mark the index of left aubarray (L)
    // j - to mark the index of right sub-raay (R)
    // k - to mark the index of merged subarray (A)
    i = 0; j = 0; k =0;

    while(i<leftCount && j< rightCount) {
        if(L1[i]  <= R1[j])  { A[k] = L1[i];     B[k] = L2[i];   k++;    i++; 	}
        else    			{ A[k] = R1[j];     B[k] = R2[j];   k++;    j++;    }
    }
    while(i < leftCount) {  A[k] = L1[i];   B[k] = L2[i];   k++;    i++;    }
    while(j < rightCount){  A[k] = R1[j];   B[k] = R2[j];   k++;    j++;    }

}

// Recursive function to sort an array of integers. 
void MergeSort(int *A,int *B,int n) 
{
    int mid, i, *L1, *R1, *L2, *R2;// 1 is for A, 2 is for B
    if(n < 2) return; // base condition. If the array has less than two element, do nothing. 

    mid = n/2;  // find the mid index. 

    // create left and right subarrays
    // mid elements (from index 0 till mid-1) should be part of left sub-array 
    // and (n-mid) elements (from mid to n-1) will be part of right sub-array
    L1 = (int*)malloc(mid*sizeof(int)); //left sub array of A( size = mid-1-0+1 = mid)
    R1 = (int*)malloc((n- mid)*sizeof(int)); //right subarray of A( size = n-1 - mid +1 = n-mid )
    
    L2 = (int*)malloc(mid*sizeof(int)); //left subarray of B
    R2 = (int*)malloc((n- mid)*sizeof(int));  // right subarray of B
    
    for(i = 0;i<mid;i++) L1[i] = A[i]; // creating left subarray
    for(i = mid;i<n;i++) R1[i-mid] = A[i]; // creating right subarray

    for(i = 0;i<mid;i++) L2[i] = B[i]; // creating left subarray
    for(i = mid;i<n;i++) R2[i-mid] = B[i]; // creating right subarray

    MergeSort(L1,L2,mid);  // sorting the left subarray 1 for A nd 2 for B(according to A)
    MergeSort(R1,R2,n-mid);  // sorting the right subarray 1 for A and 2 for B(according to A)
    Merge(A,B,L1,L2,mid,R1,R2,n-mid);  // Merging L and R into A as sorted list.
    free(L1);        free(R1);        free(L2);        free(R2);
} 
        int main()
        {
        	int n,q,i,j,min,temp,index,a,b,maxa=0,maxb=0,indexA,indexB;
        	scanint(&n);
            scanint(&q);
            int A[n],B[n],Ain[n],Bin[n],tempA,tempB,tempAin,tempBin;
        	for(i=0;i<n;i++)
        	{	scanint(&A[i]); if(A[i]>maxa) maxa=A[i];     Ain[i]=i;    }
        	//for(i=0;i<n;i++)
            //	printf("%d  %d\n",A[i],Ain[i]);
            for(i=0;i<n;i++)
            {    scanint(&B[i]); if(B[i]>maxb) maxb=B[i];     Bin[i]=i;   }
            MergeSort(A,Ain,n);
            //printf("\n");
            MergeSort(B,Bin,n);
            //for(i=0;i<n;i++)
            //	printf("%d  %d\n",A[i],Ain[i]);
            for(i=0;i<q;i++)// each query
            {
                indexA = binarySearchModified(A, 0, n-1, a);
                indexB = binarySearchModified(B, 0, n-1, b);
                int tempA[n-indexA],tempAin[n-indexA],tempB[n-indexB],tempBin[n-indexB],cA,cB,k;//size = n-1-indexA+1;
                scanint(&a);    scanint(&b);
                if(maxa<a || maxb<b)
                {    index = -2;  goto prt; }
                k=0;
                for(j=indexA;j<n;j++)//size is n-1-indexA+1 = n-indexA
                    tempA[k++] = A[j];
                k=0;
                for(j=indexA;j<n;j++) 
                    tempAin[k++] = Ain[j];
                k=0;
                for(j=indexB;j<n;j++)// size = n-indexB
                    tempB[k++] = B[j];
                k=0;
                for(j=indexB;j<n;j++) 
                    tempBin[k++] = Bin[j];
                MergeSort(tempAin,tempA,n-indexA);
                MergeSort(tempBin,tempB,n-indexB);
                min = 0x7fffffff; index =-2;
                cA=cB=0;
                while(1)
                {
                    if(cA>=n-indexA || cB>=n-indexB)
                        goto prt;
                    if(tempAin[cA]==tempBin[cB])
                    {
                        temp = tempA[tempAin[cA]]-a+tempB[tempBin[cB]]-b;
                        if(temp<min)
                        {    min = temp;    index = tempBin[cB];  }
                        if(min==0)
                            goto prt;
                    }
                    else if(tempAin[cA]>tempBin[cB])
                        cA++;
                    else
                        cB++;     
                }
                prt:
                printf("%d\n",index+1);
                //printf("   %d  %d\n",indexA,indexB);
            }    
        	return 0;
        }  