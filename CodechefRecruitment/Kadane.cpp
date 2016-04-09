#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
     
    int contiguousSubArrayWithLargestsum(int a[], int size, int subArraySize){
     
        int startIndex = 0, endIndex = 0;
        int index;
        int currStartIndex = 0;
     
        int maxSum = 0;
        int currentSum = 0;
     
        for(index = 0 ; index < size; ){
            if(index-startIndex+1 <= subArraySize)
                currentSum  = currentSum + a[index];
            // case 1 : When ith element can be included
            // Change the end index and also update the start index.
            if(currentSum > maxSum && endIndex-startIndex+1 <= subArraySize){
                maxSum = currentSum;
                endIndex = index;
                startIndex = currStartIndex;
            }
            /*case 2 : When ith index cannot be included and 
            we need to start with i+1 index. till now our max sum
            and start and end index of that sum remain same */
            if(currentSum < 0){
                currStartIndex = index + 1;
                currentSum = 0;
            }
            if(endIndex-startIndex+1 > subArraySize)    {
                currStartIndex = startIndex + 1;
                index = currStartIndex;
                endIndex = index;
                currentSum = 0;
            }
            else
                index++;
        }
        //printf("\nBetween (%d, %d)", startIndex, endIndex);
        //printf("\nMaximum Sum : %d", maxSum);
        return maxSum;
    }
     
    //Driver program
    int main() {
     
       //int intArr[] = {-1, 3, -5, 4, 6, -1, 2, -7, 13, -3};
       //int size = sizeof(intArr)/sizeof(intArr[0]);
        int t,n,k,i,j,temp,subArraySize;
        cin>>t;
        while(t--)  {
            cin>>n>>k;
            if(n<k)
                cout<<"-1\n";
            else    {
                int arr[n];
                //cout<<n;
                for(i=0;i<n;i++)    cin>>arr[i];

                subArraySize = ceil(n/k);
                temp = contiguousSubArrayWithLargestsum(arr, n, subArraySize);
                cout<<temp<<endl;
            }
        }
        return 0;
    }
     