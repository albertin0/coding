#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
	int i,j,flag;
	cout<<"2";
	for(i=3;i<=1000000000;i++)
	{
		flag=0;
		for(j=2;j<i-1;j++)
		{
			if(i%j==0)
			{
				flag=1;	break;
			}
		}
		if(flag==0)	
			cout<<" "<<i;
	}
	return 0;
}