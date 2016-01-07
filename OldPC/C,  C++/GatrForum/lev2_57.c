#include<stdio.h>

int main()
{
	int x=20,y=35;
	x = y+++x++;
	printf("\n   %d   %d",x,y);
}