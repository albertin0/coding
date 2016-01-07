#include <iostream>
#include <stdlib.h>
#include <time.h>
#define 	n 100
using namespace std;
int main()
{
	srand(time(NULL));
	int arr[n],sum=0,j,i,max,min,cmin,cmax,c=0;
	for(j=0;j<100;j++)
	{
	c=0;
	for(i=0;i<n;i++)
		arr[i] = rand()%100 + 1;
	if(++c&&arr[0]<arr[1])
	{	min = arr[0];	max = arr[1];	}
	else
	{	min = arr[1];	max = arr[0];	}
	for(i=2;i<n-1;i+=2)
	{
		cmin = arr[i];	cmax = arr[i+1];
		if(c++&&cmax<cmin)
		{
			cmax ^=cmin;
			cmin ^=cmax;
			cmax ^=cmin;
		}
		if(c++&&min>cmin)
		{	min = cmin;}
		if(c++&&max<cmax)
		{	max = cmax;}
	}
	sum += c;
	cout<<c<<"  " ;
	}
	cout<<endl<<(double)sum/100.0;
	/*for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl<<min<<"=min     max="<<max<<"  #comparisions="<<c<<endl;*/
	return 0;
}