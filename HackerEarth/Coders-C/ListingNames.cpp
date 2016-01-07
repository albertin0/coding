#include <iostream>
#include <cstdlib>
using namespace std;

void Merge(string a[],string l[],int lCount,string r[],int rCount)
{
	int i,j,k;
	i=j=k=0;
	while(i<lCount&&j<rCount)
		if(l[i]<r[j])
			a[k++] = l[i++];
		else
			a[k++] = r[j++];
	while(i<lCount)
		a[k++] = l[i++];
	while(j<rCount)
		a[k++] = r[j++];
}
void MergeSort(string A[],int n)
{
	if(n<2)
		return;
	int mid = n/2,i;
	string L[mid];
	string R[n-mid];
	for(i = 0;i<mid;i++) L[i] = A[i]; // creating left subarray
	for(i = mid;i<n;i++) R[i-mid] = A[i]; // creating right subarray

	MergeSort(L,mid);  // sorting the left subarray
	MergeSort(R,n-mid);  // sorting the right subarray
	Merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.

	//delete(L);
	//delete(R);
}
int main()
{
	int n,i;
	cin>>n;
	string A[n];
	i=0;
	while(i<n)
		cin>>A[i++];
	MergeSort(A,n);
	i=0;
	while(i<n)
		cout<<A[i++]<<endl;

	return 0;
}