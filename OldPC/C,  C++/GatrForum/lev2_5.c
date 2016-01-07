#include<stdio.h>

void foo(int b[3][3])
{
	int i=2;
	printf("\n   %d    %d     %d",b[i][0], b[i][1], b[i][2]);
	b[1][1]=9;
}

int main()
{
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	foo(a);
	int i=2;
	printf("\n  %d   %d    %d",a[i][0], a[i][1], a[i][2]);
	return 0;
}