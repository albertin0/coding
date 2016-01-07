#include<stdio.h>
#include<string.h>


char arr[], str[];
char beg[] = "";
int i,len,temp;
int main()
{
	scanf("%s", arr);
	call(0,strlen(arr)-1,beg);
	return 0;
}
void call(int initial, int end, char begg[])
{
	len = end - initial + 1;

	if(len > 1)
	{
		for(i = initial ; i <= len ; i++)
		{
			temp = arr[initial];
			arr[initial] = arr[i+1];
			arr[i+1] = arr[initial];
			beg = strcat (beg , begg);
			beg = strcat (beg , arr[1]);
			call(initial+1, end, beg);
		}
	}
	else 
	{
		str = strcat( beg, arr[initial]);
		printf("%s\n", str );
	}
}