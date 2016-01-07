#include<stdio.h>
int main()
{
	int A,i,n3,n5,m3,m5,ANS;
	scanf("%d",&A);
	n3 = A/3;
	n5 = A/5;
	ANS = 1;
	ANS = ANS + n3 + n5;
	for(i=1;i<=n3;i++)
	{
		A = A - 3;
		m5 = A / 5;
		if(m5 == 0)	break;
		ANS = ANS + m5;
	}
	/*for(i=1;i<=n5;i++)
	{
		A = A - 5;
		ANS--;
		m3 = A / 3;
		if(m3 == 0)	break;
		ANS = ANS + m3;
	}*/
	printf("\n\n%d\n", ANS);
	return 0;
}