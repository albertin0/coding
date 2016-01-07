#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
	int w,h,i;
	cin>>w>>h;
	int arr[w];
	for(i=0;i<w;i++)
		cin>>arr[i];
	int in,loop=1;
	int ptr=0, held=0;
	while(loop)
	{
		cin>>in;
		switch(in)
		{
			case 1:	//move left
					if(ptr>0)	ptr--;
					break;
			case 2: //move right
					if(ptr<w-1)		ptr++;
					break;
			case 3:	//pick up box
					if(!held && arr[ptr])	{	arr[ptr]--;	held=1;	}		
					break;
			case 4: //drop box
					if(held && arr[ptr]<h)	{	arr[ptr]++;	held=0;	}
					break;
			case 0:	//exit
					loop=0;
					break;
		}
	}
	for(i=0;i<w;i++)
		cout<<arr[i]<<" ";
	return 0;
}