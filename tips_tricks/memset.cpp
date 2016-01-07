#include <iostream>
#include <string.h>	//for memset()
using namespace std;

int main()
{
	int arr[100],i;
	memset(arr,0,sizeof(arr));
	for(i=0;i<100;i++)
		cout<<++arr[i]<<" ";
	return 0;
}
