#include <iostream>
#include <cstring>

using namespace std;
int max(int a,int b)	{
	if(a>=b)
		return a;
	else
		return b; 
}
int main(){
	string i1,i2;
	int i,j,lcs=0,len,prev,temp;
	cin>>i1>>i2;
	len = i2.length();
	int arr[len+1];
	for(i=0;i<len+1;i++)	
		arr[i] = 0;
	for(i=0;i<i1.length();i++)	{
		prev = arr[0];
		for(j=0;j<i2.length();j++)	{//for j=0 we target j=1, in arr
			if(i1[i]==i2[j])	{
				temp = arr[j] + 1;
				arr[j]=prev;
				prev = temp;
			}
			else	{
				arr[j]=prev;
				prev = temp = max(arr[j],arr[j+1]);
			}
		}
		arr[j] = prev;
	}
	cout<<endl;
	for(i=0;i<len+1;i++)
		cout<<arr[i]<<"\t";
	return 0;
}