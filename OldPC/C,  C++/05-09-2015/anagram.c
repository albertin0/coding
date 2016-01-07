#include<stdio.h>
#include<string.h>
char str[100],c[1];
int len,i,temp;

int call(char str2[100], char beg[100], int inn, int end)
{
	len = end - inn + 1;
	if(len>1)
	{
		for(i=inn; i<=end; i++)
		{
			temp = str2[inn];
			str2[inn] = str2[i];
			str2[i] = temp;
			c[0] = str2[i];
			strcat(beg, c);
			call(str2, beg, inn+1, end);
		}
	}
	else
	{
		printf("%s\n",beg );
	}
	return 0;
}


int main()
{
	scanf("%s", &str);
	printf("\n");
	call(str,NULL,0,strlen(str));
	printf("\n\n");
	return 0;
}