#include<stdio.h>
int main()
{
	int x,y,z;
	x=y=1;
	z=x++-1;
	printf("\nx=%d  y=%d  z=%d",x,y,z);
	z=x+++y;
	printf("\nx=%d  y=%d  z=%d",x,y,z);
	return 0;
}