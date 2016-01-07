#include<stdio.h>
#include<string.h>

char* collegecomparison(int input1[],int input2[])
{
	int len1=(sizeof(input1))/sizeof(int),len2=sizeof(input2)/sizeof(int),i,j,temp;
	//MergeSort(input1,len1);
	//MergeSort(input2,len2);
	for(i=0;i<10;i++)
	printf("\n%d",input1[i]);
	char *ret="invalid";
	if(len1!=len2)
		return ret;
	for(i=0;i<len1-1;i++)
	{
		for(j=i+1;j<len1;j++)
		{
			if(input1[i]>input1[j])
			{	temp=input1[j];	input1[j]=input1[i];	input1[i]=temp;	}
		}
	}
	for(i=0;i<len2-1;i++)
	{
		for(j=i+1;j<len2;j++)
		{
			if(input2[i]>input2[j])
			{	temp=input2[j];	input2[j]=input2[i];	input2[i]=temp;	}
		}
	}
	
	for(i=0;i<len1;i++)
	{
		printf("  %d",input1[i]);
	}
	for(i=0;i<len1;i++)
	{
		if(!(input1[i]>0)||!(input2[i]>0))
			return ret;		
		else if(input1[i]!=input2[i])
		{	ret="unequal";	return ret;	}
	}
	ret = "equal";
	return ret; 
}
int main()
{
	int in1[7]={12,11,5,2,7,5,-11},in2[7]={5,12,5,7,11,2,11} ;
	char *a=collegecomparison(in1,in2);
	printf("%s\n",a );
	return 0;
}
