#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
	int i=1,j=1,k=1;
	if(i--&&j++);
	cout<<"i=j=k=1 \n";
	cout<<"operation: (i--&&j++)"<<endl;
	printf("i=%d  j=%d  k=%d\n",i,j,k);

	i=j=k=1;
	cout<<"i=j=k=1 \n";
	cout<<"operation: (--i&&j++&&k++&&j++)"<<endl;
	if(i--&&j++&&k++&&j++);
	printf("i=%d  j=%d  k=%d\n",i,j,k);

	i=j=k=1;
	cout<<"i=j=k=1 \n";
	cout<<"operation: (i--&&j++&&k++&&j++)"<<endl;
	if(i--&&j++&&k++&&j++);
	printf("i=%d  j=%d  k=%d\n",i,j,k);

	i=j=k=1;
	cout<<"i=j=k=1 \n";
	cout<<"operation: (i--||j++&&k++||j++)"<<endl;
	if(i--||j++&&k++||j++);
	printf("i=%d  j=%d  k=%d\n",i,j,k);
	
	i=j=k=1;
	cout<<"i=j=k=1 \n";
	cout<<"operation: ((i--&&j++&&k++)||j++)"<<endl;
	if((i--&&j++&&k++)||j++);
	printf("i=%d  j=%d  k=%d\n",i,j,k);

	return 0;
}