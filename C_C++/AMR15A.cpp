#include<iostream>

using namespace std;

int main(){
	int n,x,i,even=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x%2==0)
			even++;
	}
	
	if(even>n/2)
		cout<<"READY FOR BATTLE\n";
	else
		cout<<"NOT READY\n";
	return 0;
}