#include<stdio.h>
#include<math.h>
int xor(int x,int y)
{
	int a = x & y;
    int b = ~x & ~y;
    int z = ~a & ~b;
    return z;
}
int main()
{
	int n,t,ll,ul,s,m,heads,temp,ss,temp2;
	scanf("%d %d",&n,&t);
	s = pow(2,n-1+1)-1;
	ss=s;
	//printf("\n  n=%d  t=%d  s=%d  ss=%d",n,t,s,ss);
	while(t--)
	{
		scanf("%d %d %d",&m,&ll,&ul);
		//printf("\n  m=%d  ll=%d  ul=%d",m,ll,ul);
		if(m==0)
		{
			temp = pow(2,ul+1)-pow(2,ll);//ll+1-1
			//printf("\n  s=%d  ",s);
			s = xor(s,temp);
			//printf("  temp=%d   s(XORed)=%d    ",temp,s);
		}
		else
		{
			heads = 0;
			temp=xor(s,ss);//1=head
			temp2= pow(2,ul+1)-pow(2,ll);//ul+1,ll+1-1
			temp = temp&temp2;
			//printf("\n  temp=%d  s=%d  ss=%d  \ninside loop:",temp,s,ss);
			while(temp)
			{
				if(temp%2)
					heads++;
				temp = temp/2;
				//printf("\n   temp=%d  heads=%d  ",temp,heads);
			}
			printf("\n%d",heads);
		}
	}
	//printf("\n%d",s);
	return 0;
}