#include<stdio.h>
#include<iostream>
int main()
{
	FILE *fptr1,*fptr2;
	fptr1=fopen("abc.txt","r+");
	fptr2=fopen("abc2.txt","w+");
	char c;
	int flag=0,i=1;
	while((c=fgetc(fptr1))!=EOF)
	{
		fputc(c,fptr2);
		printf("\n%c \ti=%d",c,i++);
		if(c==','||c=='.')
			fputs("\n",fptr2);
		if(flag==4)
		{	fputc('\n',fptr2);	flag=0;	}
		if(flag==3)
			if(c=='e')
				flag=4;
			else
				flag=0;
		if(flag==2)
			if(c=='l')
				flag=3;
			else
				flag=0;
		if(flag==1)
			if(c=='i')
				flag=2;
			else
				flag=0;
		if(c=='f'&&flag==0)
			flag=1;

	}
	rewind(fptr1);	rewind(fptr2);
	
	/*char fi[5];
	int i=0;
	while((fgets(fi,5,fptr1))!=NULL)
	{
		fputs(fi,fptr2);
		printf("\n%c \ti=%d",fi[0],i++);
		if(fi[0]=='f'&&fi[1]=='i'&&fi[2]=='l'&&fi[3]=='e')
		{
			//puts("\n, %s",fi);
			fputs("\n",fptr2);
		}
	}*/
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}