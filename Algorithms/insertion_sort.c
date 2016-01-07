#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int random(int a,int b)
{
	return(a+(rand()%(b-a+1)));
}
int main()
{
	int a[10],i,j,key;
	time_t t=NULL;
	srand(time(NULL));
	for(i=0;i<10;i++)
		a[i]=random(1,100);
	for(i=1;i<10;i++)
	{
		key=a[i];	j=i;
		while(j-1>=0&&a[j-1]>key)
		{	
			a[j]=a[j-1];
			j--;
		}
		a[j]=key;
	}
	for(i=0;i<10;i++)
		printf("  %d",a[i]);
	return 0;
}