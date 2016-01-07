#include<stdio.h>

//using namespace std;

int main()
{
	int t,n,i,j,sol;
	//cin>>t;
	scanf("%d",&t);
	while(t--)
	{
		//cin>>n;	
		scanf("%d",&n);
		int arr[n];
		//MergeSort(arr,n);
		j=0;
		for(i=0;i<n;i++)		
		{
			//cin>>arr[i];
			scanf("%d",&arr[i]);
			j+=arr[i];
		}
		//arr[i]=0;
		//MergeSort(arr,n-1);
		if(j%n==0 && j!=0)
			//cout<<n;
			printf("%d\n", n);
		else
			//cout<<n-1;
			printf("%d\n", n-1);
	}
	return 0;
}