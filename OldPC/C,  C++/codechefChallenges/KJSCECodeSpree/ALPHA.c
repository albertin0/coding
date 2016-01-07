#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,len;char str[101],op[101];
	scanf("%d\n",&t);
	while(t--)
	{
		//gets(str);
		//gets(str);
		//printf("\n%s\n",str);
		//scanf("%s"); //fflush(stdin); //scanf ("%[^\n]%c", C);
		gets(str);// needs a \n see scanf for t
		printf("%s",str);
		len=strlen(str);
		j=0;
		for(i=0;i<len;i++)
		{
			if(str[i]>=65&&str[i]<=90)
				op[j++]=((str[i]+1-65)%26)+65;
			
			else if(str[i]>=97&&str[i]<=122)
				op[j++]=((str[i]+1-97)%26)+97;
		}
		op[j]=0;
		//len=strlen(op);
		//while(i<len)
		//	printf("%c",op[i++]);
		printf("%s",op);
		puts("");

	}
	return 0;
}