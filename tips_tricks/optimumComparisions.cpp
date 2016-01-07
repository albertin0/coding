#include <iostream>
#include <stdlib.h>
#include <time.h>
#define 	n 10
using namespace std;
int main()
{
	srand(time(NULL));
	int arr[n],sum=0,j,i,max,min,c=0;
	for(j=0;j<100;j++)
	{
	c=0;
	for(i=0;i<n;i++)
		arr[i] = rand()%100 + 1;
	min = arr[0];	max = arr[n-1];
		if(max<min&&c++)
		{
			max ^=min;
			min ^=max;
			max ^=min;
		}
	for(i=1;i<n-1;i++)
	{
		if(c++&&min>arr[i])
		{	min = arr[i];}
		else if(c++&&max<arr[i])
		{	max = arr[i];}
	}
	sum += c;
	cout<<c<<"  " ;
	}
	cout<<endl<<sum;
	/*for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl<<min<<"=min     max="<<max<<"  #comparisions="<<c<<endl;*/
	return 0;
}