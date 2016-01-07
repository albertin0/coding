#include<stdio.h>
int main()
{
	int i=2;
	printf("\n%d  %d   %d",i,i++,i*i++);
	i=2;
	printf("\n%d  %d  %d",i++,i*i++,i);
	i=2;
	printf("\n%d  %d  %d",i,i*++i,++i);
	i=2;
	printf("\n%d  %d  %d",++i,i++,i++*++i);
	i=2;
	printf("\n%d  %d  %d",i++,++i,++i*i++);
	i=2;
	printf("\n%d  %d  %d",i++,i++,i++);
	i=2;
	printf("\n%d  %d  %d",++i,++i,++i);
	i=2;
	printf("\n%d  %d  %d",i++,i++,++i);
	i=2;
	printf("\n%d  %d  %d",++i,i++,i++);
	i=2;
	printf("\n%d  %d  %d",i+++i,i,(++i)+(++i));
	return 0;
}	