#include <stdio.h>
void swap(char*,int,int);
void permute(char *in, int beg, int end)
{
	int i;	
	if(beg==end)
		printf("%s\n",in);
	else
	{
		for(i=beg;i<=end;i++)
		{
			if(i>beg)
				swap(in,beg,i);
			permute(in,beg+1,end);
			if(i>beg)
				swap(in,beg,i);
		}
	}
}
void swap(char *in, int a,int b)
{
	char temp;
	temp = *(in+a);
	*(in+a) = *(in+b);
	*(in+b) = temp;
}
int main()
{
	char a[100] = {'a','b','c','d','\0'};
	int len = 4;
	permute(a,0,len-1);
	return 0;
}
