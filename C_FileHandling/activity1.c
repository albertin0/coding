#include<stdio.h>

int main()
{
	FILE *ptrFile;
	char c;
	ptrFile = fopen("abc.txt","w+");
	if(!ptrFile){
		printf("Can't open file");
		return 0;
	}
	//fprintf(ptrFile, "\tNum\tASCII");
	for(int i=0;i<128;i++){
		c=(char)i;
		//fprintf(ptrFile,"\n\t%03d :",i);
		fprintf(ptrFile,"\t%c",c);
	}
	printf("\nSuccess writing to file.");
	if(fclose(ptrFile))
		printf("\nUnable to close File");
	
	return 0;
}