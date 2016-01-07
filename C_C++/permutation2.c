#include<stdio.h>
#include<string.h>
//using namespace std;
void exchange(char *a,char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
void permute(char *c,int beg)
{
	if(beg==(strlen(c)-1))
		printf("%s\n",c);
	else
	{
		int i;
		for(i=beg;i<strlen(c);i++)
		{
			exchange((c+beg),(c+i));
			permute(c,beg+1);
			exchange((c+beg),(c+i));
		}
	}
}
int main()
{
	char c[10]="abc";//{'a','b','c','d','\0'};
	int beg=0;
	//scanf("%s",c);
	permute(c,beg);
	return 0;
}