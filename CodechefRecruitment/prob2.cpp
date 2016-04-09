#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int printKMax(int arr[], int n, int k)
{
    int j, max = 0, sum;
 
    for (int i = 0; i <= n-k; i++) // n= length of array, k = len of sub array
    {
        sum = 0;
        for (j = 0; j < k; j++)     sum += arr[i+j];

        if(sum>max) 
            max = sum;
    }
    return max;
}
 
 
int main()
{
    int t,n,k,i,j,temp,subArraySize;
        cin>>t;
        while(t--)  {
            cin>>n>>k;
            j = 0;
            if(n<k)
                cout<<"-1\n";
            else    {
                int arr[n];
                //cout<<n;
                for(i=0;i<n;i++)    cin>>arr[i];

                subArraySize = ceil(n/k);
                for(i=subArraySize; i>=1; i--)  {
                    temp = printKMax(arr, n, i);
                    if(temp>j)
                        j = temp;
                }
                cout<<j<<endl;
            }
        }
        return 0;
}