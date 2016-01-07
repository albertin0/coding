#include<stdio.h>
#include<string.h>
int main()
{
	int test,i,len,flag,ascii_in2,ascii_in1,len1,len2;
	char input1[10], input2[10];
	scanf("%d",&test);
	while(test--)
	{
		scanf("%s", &input1);
		scanf("%s", &input2);
		len1 = strlen(input1);
		len2 = strlen(input2);
		len = len1;
		flag = 1;
		for(i = 0; i< len; i++)
		{
			ascii_in1 = (int)input1[i];
			ascii_in2 = (int)input2[i];

			if(len1 != len2)
			{
				flag = 0;		break;
			}
			if((ascii_in1<97 && ascii_in1!=63) || ascii_in1>122 || (ascii_in2<97 && ascii_in2!=63) || ascii_in2>122)
			{
				flag = 0;	break;
			}

			if(input1[i]=='?' || input2[i]=='?')
				continue;
			else if(input1[i]!=input2[i])
					{	flag = 0;	break; 	}

		}
		if(flag == 1)
			printf("\nYes");
		else
			printf("\nNo");

	}
	return 0;
}