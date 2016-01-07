#include<stdio.h>

int main()
{
	#define MAX(x,y) (x)>(y)?(printf("x")):(printf("y"))
	int i=10,j=5,k=0;
	printf("\n %d %d %d",i,j,k);
	//k==(i++)>(++j)?(i++):(++j);
	k==MAX(i++,++j);
	printf("\n %d %d %d",i,j,k);
}
