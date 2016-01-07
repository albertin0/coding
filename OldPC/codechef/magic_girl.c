//successfully submitted.

#include<stdio.h>
#define gchar getchar_unlocked()

void fastread(int* a)
{
register char c = 0;
while (c < 33)
c = gchar;
*a = 0;
while (c > 33)
{
*a = *a * 10 + c - '0';
c = gchar;
}
}

 int main()
{
int t,k;
int i,j,max,potion;
fastread(&t);
int c[t][3],p[t][3][100],m[t];
for(k=0;k<t;k++)	{
fastread(&c[k][0]);fastread(&c[k][1]);fastread(&c[k][2]);fastread(&m[k]);
for(i=0;i<3;i++)	{	for(j=0;j<c[k][i];j++)	{	fastread(&p[k][i][j]); }	}	}
k=0;
while(k<t)
{
while(m[k]>0)	{
max=0;
for(i=0;i<3;i++)	{	
for(j=0;j<c[k][i];j++)	{
if(p[k][i][j]>max)
{
max=p[k][i][j];
potion=i;
}	}	}
for(i=0;i<c[k][potion];i++)	{	p[k][potion][i]=p[k][potion][i]/2;	}
m[k]--;
}
max=0;
for(i=0;i<3;i++)	{	
for(j=0;j<c[k][i];j++)	{
if(p[k][i][j]>max)
{
max=p[k][i][j];
}	}	}
printf("\n%d",max);
k++;
}	
return 0;
} 