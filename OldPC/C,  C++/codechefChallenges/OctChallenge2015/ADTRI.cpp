#include<iostream>
#include<math.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
         // If the element is present at the middle itself
        if (arr[mid] == x)  return mid;
         // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
         // Else the element can only be present in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
    // We reach here when element is not present in array
   return -1;
}

int main()
{
	int t,flag,k;
	//long long int temp;
	long double d,n,i,d2;
	cin>>t;
	int test[500000],size;
	//cout<<test[4999999];
	while(t--)
	{
		cin>>n;
		k=flag=0;
		for(i=1.0;i<n-1;)
		{
			//d=sqrt(pow(n,2.0)-pow(i,2.0));
			d=sqrt((n+i)*(n-i));
			/*cout<<endl<<i;
			cout<<endl<<d;
			d=d*10.0;
			cout<<endl<<d;
			temp=d;
			cout<<endl<<temp;*/
			d2=trunc(d);
			size=sizeof(test)/sizeof(int);
			if(binarySearch(test, 0, size, (int)d2)!=-1)
				break;

			if(d2==d)
			{
				flag=1;	
				//cout<<endl<<i;
				break;
			}
			else
				i=ceil(sqrt((n+d2)*(n-d2)));
			test[k++]=i;
			
		}
			if(flag==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}