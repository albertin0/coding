#include<stdio.h>
#include<stdlib.h>
int main()
{
	//printf("\n%d",abs(-12));
	double hellodouble = 10.025;
	int intPart = (int)hellodouble;
	double decPart = hellodouble - intPart;
	//printf("\n %d %lf",intPart,decPart);
	decPart*=100.0;
	int intPart2 = (int)decPart;
	double decPart2 = intPart2/100.0;
	double hellodouble2= intPart + decPart2;
	printf("\n%lf",hellodouble2);

	double a = 2.03;
	int j = (int)a;
	if(a>(double)j)
		j++;
	printf("\n%d",j);
	printf("\n%d",(4^5));

	return 0;
}