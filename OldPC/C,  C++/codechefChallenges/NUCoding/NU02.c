#include<stdio.h>
#include<string.h>

int main()
{
	char stf[10],edf[10],d[1000];
	int flag,lstf,ledf,ld,i,j,k,t,test;
	scanf("%d",&t);
	while(t--)
	{
		char out[1000]="";
		scanf("%s",&stf);
		scanf("%s",&edf);
		scanf("%s",&d);
		lstf=strlen(stf);
		ledf=strlen(edf);
		ld=strlen(d);
		flag=k=0;
		for(i=0;i<ld;i++)
		{
			if(flag==0)
			{
				test=1;
				for(j=0;j<lstf;j++)
				{
					if(d[i+j]!=stf[j])
					{
						test=0;	break;
					}
				}
				if(test==1)
				{
					flag=1;	i=j+i-1;
				}
				else
					out[k++]=d[i];
			}
			else
			{
				test=1;
				for(j=0;j<ledf;j++)
				{
					if(d[i+j]!=edf[j])
					{
						test=0;	break;
					}
				}
				if(test==1)
				{
					flag=0;	i=i+j-1;
				}
			}
		}
		//printf("\n    %d   ",strlen(out));
		//for(i=0;i<strlen(out);i++)
			printf("\n%s",out);

	}
	return 0;
}