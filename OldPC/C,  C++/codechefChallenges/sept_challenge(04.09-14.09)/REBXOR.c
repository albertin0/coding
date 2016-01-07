#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a[400000],j,k,max,fhalf,shalf;
	//int bt[400000][30]; //2^0 - 2^29
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	max=0;
	for(i=0;i<=n-2;i++)
	{
		fhalf=a[i];
		for(j=i+1;j<=n-2&&fhalf!=0;j++)
		{
			//printf("\n    j=%d   fhalf=%d     fhalf^a[j]=%d",j,fhalf,fhalf^a[j]);
			if(fhalf>=(fhalf^a[j]))
			{	
			//	printf("\n   fhalf   break");
				break;
			}
			fhalf=fhalf^a[j];
			//printf("\n        fhalf=%d",fhalf);
		}
		shalf=a[n-1];
		for(k=n-2;k>=j&&shalf!=0;k--)
		{
			if(shalf>=(shalf^a[k]))
			{	
			//	printf("\n   shalf   break");
				break;
			}
			shalf=shalf^a[k];
			//printf("\n      shalf=%d",shalf);
		}
		if(fhalf+shalf>max)
			max=fhalf+shalf;
	}
	printf("\n%d",max);
	return 0;
}