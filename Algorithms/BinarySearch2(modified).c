#include<stdio.h>
// A iterative binary search function. It returns location of x in
// given array arr[l..r] if present, otherwise -1
int binarySearch(int arr[], int l, int r, int x)
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
 
int main(void)
{
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 11;
   int result = binarySearch(arr, 0, n-1, x);
   //(result == -1)? printf("All array Elements are bigger than x")
     //            : (result==n)? printf("All array Elements are smaller than x") : printf("All array Elements are bigger or equal to x after position: %d", result+1);
   printf("%d\n", result);
   return 0;
}