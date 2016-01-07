#include<stdio.h>

int main()
{
	int a,i,j,k,cnt;
	scanf("%d",&a);
	cnt = 0;
	for(i=0;i<=a;i+=5)
	{
		for(j=0;i+j<=a;j+=3)
		{
			for(k=0; i+j+k<=a; k++)
			{
				if(i+j+k == a)
					cnt++;
				
			}
		}
	}
	printf("\n\n%d\n", cnt);
	return 0;
}