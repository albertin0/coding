#include<stdio.h>

int main()
{
	char c[] = "asdasd";  
	int i=0;
	*(c+1) = 'b';			//program crashes as C WAS DECLARED with *
	while(8-i)
		printf("%c  ", *(c+i++));
	return 0;
}