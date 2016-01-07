#include<stdio.h>
#include<string.h>
int main()
{
	int test,i,k,ans,min,flag,loc;
	char str[2000];
	int chk[2000];
	for(i=0; i<2000; i++)
		chk[i]=0;
	
	scanf("%d",&test);
	while(test--)
	{
		scanf("%s", &str);
		ans=0;
		for(i=0; i<strlen(str); )
		{
			loc=i+1;  min=26;	flag=0;
			for(k=i+1; k<strlen(str); k++)
			{
				if( (str[k]-str[i]) < min  &&  (str[k]-str[i]) > 0 ) // no <= as it will give the last alphabet
				{
					min= str[k]-str[i];
					loc= k;
					flag = 1;
				}
			}
			if(flag == 1)
			{
				chk[loc]=1;
			}
			i=loc;
		}
		for(i=strlen(str)-1; i>=0; )
		{
			loc=i-1;  min=26;	flag=0;
			for(k=i-1; k>=0; k--)
			{
				if( (str[k]-str[i]) < min  &&  (str[k]-str[i]) > 0 ) // no <= as it will give the last alphabet
				{
					min= str[k]-str[i];
					loc= k;
					flag = 1;
				}
			}
			if(flag == 1)
			{
				chk[loc]=1;
			}
			i=loc;
		}
		for(i=0; i<strlen(str); i++)
		{
			if(chk[i]==1)
				ans++;
		}
		printf("\n%d", ans );
	}

}