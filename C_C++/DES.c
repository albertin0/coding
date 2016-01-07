#include<stdio.h>
#include<string.h>
/*int lshift(char *c,int b,int s)
{
	int i,j;char temp[s+1];
	for(i=b,j=0;j<s;i=(i+1)%32,j++)
		temp[j]=c[i];
	temp[j]='\0';
	c=temp;
	return 0;
}*/
int main()
{
	char pt64[65],ip64[65],key64[65],key56[57],key48[49],l32[33],r32[33],keyl28[29],keyr28[29],r48[49],s48[49],s32[33],p32[32];
	int i,j,k,rou;
	printf("\nEnter 64 bit Plain-Text in Binary(0/1):");	scanf("%s",&pt64);
	printf("\nEnter 64 bit Key in Binary(0/1):");	scanf("%s",&key64);
	//trim(0,31,pt64,l);
	//trim(32,63,pt64,r);
	printf("\n%s",pt64);
	printf("\n%s",key64);
	int ip[64]={58,50,42,34,26,18,10,2,60,52,44,36,28,20,12,4,62,54,46,38,30,22,14,6,64,56,48,40,32,24,16,8,57,49,41,33,25,17,9,1,59,51,43,35,27,19,11,3,61,53,45,37,29,21,13,5,63,55,47,39,31,23,15,7};
	int fp[64]={40,8,48,16,56,24,64,32, 39,7,47,15,55,23,63,31, 38,6,46,14,54,22,62,30, 37,5,45,13,53,21,61,29, 36,4,44,12,52,20,60,28, 35,3,43,11,51,19,59,27, 34,2,42,10,50,18,58,26, 33,1,41,9,49,17,57,25};
	for(i=0;i<64;i++)
		ip64[i]=pt64[ip[i]-1];
	ip64[i]='\0';
	for(i=0;i<32;i++)
	{	l32[i]=ip64[i];		r32[i]=ip64[i+32];	}
	l32[i]=r32[i]='\0';

	for(i=0,j=0;i<64;i++)
	{	if((i+1)%8!=0)	key56[j++]=key64[i];	}
	key56[j]='\0';
	
	printf("\n%s",key56);
	for(i=0;i<28;i++)
	{	keyl28[i]=key56[i];		keyr28[i]=key56[i+28];	}
	keyl28[i]=keyr28[i]='\0';

	//printf("\n%s",keyl);
	//printf("\n%s",keyr);
	
	for(rou=1;rou<=16;rou++)
	{
		printf("\n\nRound:%d",rou);
		char temp[29];
		for(i=1,j=0;j<28;i=(i+1)%28,j++)
			temp[j]=keyl28[i];
		temp[j]='\0';
		strcpy(keyl28,temp);
		
		for(i=1,j=0;j<28;i=(i+1)%28,j++)
			temp[j]=keyr28[i];
		temp[j]='\0';
		strcpy(keyr28,temp);
		
		printf("\nLefthalf of 56-bit key  :%s",keyl28);
		printf("\nRighthalf of 56-bit key :%s",keyr28);
		char temp2[57];
		for(i=0;i<28;i++) 
			temp2[i]=keyl28[i];
		while(i<56)
			{temp2[i]=keyr28[i-28];	i++;}
		temp2[i]='\0';
		printf("\n56-bit key:%s",temp2);
		for(i=0;i<48;i++)
			key48[i]=temp2[i];
		key48[i]='\0';
		printf("\n48bit key for this round:%s",key48);

	}

	return 0;
}