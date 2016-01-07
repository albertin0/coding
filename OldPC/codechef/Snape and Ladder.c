#include<stdio.h>
#include<math.h>
#define gc getchar_unlocked()

void read(int* a)
{
	register char c=0;
	while(c<33)
	c=gc;
	*a=0;
	while(c>33)
	{
		*a=(*a)*10+c-'0';
		c=gc;
	}
}
int main()
{
	int var[1000][2];
	int i,t,bs,ls;
	read(&t);
	for(i=0;i<t;i++)
	{
		read(&var[i][0]);//bs
		read(&var[i][1]);//ls
	}
	for(i=0;i<t;i++)
	{
		bs=var[i][0];	ls=var[i][1];
		printf("%d  %d\n",sqrt(ls*ls-bs*bs),sqrt(ls*ls+bs*bs));
		
	}
	return 0;
}