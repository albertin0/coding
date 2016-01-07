#include<stdio.h>
#include<string.h>

int func(int a)
{
	int b =a/2;
	if(a%2==0)
		return b;
	else
		 return b+1;
}
int main()
{
	int t,i,flag,j,cost,count,st;
	scanf("%d", &t);
	char in[200];//for input string

	while(t--)//test cases
	{
		scanf("%s", &in);
		cost = 0;  st = 0;  char store[200] = "";//innitialise every variable to be used inside loop
		for(i=0; i<strlen(in); i++)
		{
			flag = 0;//innitialise every variable to be used inside loop
			for(j=0;j<strlen(store); j++)
			{
				if(in[i] == store[j])
				{
					flag = 1;  
					break;
				}
			}
			if(flag == 1)
				continue;

			//continue after a new non-repeated character

			store[st++] = in[i];

			count=0;//innitialise every variable to be used inside loop
			for(j=i; j<strlen(in); j++)
			{
				if(in[i] == in[j])
					count++;
			}
			
			cost = cost + func(count);
		}
		printf("\n%d",cost);
	}
	return 0;
}