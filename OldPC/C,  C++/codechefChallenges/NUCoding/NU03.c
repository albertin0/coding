#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,count;
	char s[100000],temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&s);
		count=0;	temp=s[0];
		for(i=1;i<strlen(s);i++)
		{
			if(temp==s[i])
				count++;
			else
				temp=s[i];
		}
		printf("\n%d",count);
	}
	return 0;
}

000000000000000000000000000000000000