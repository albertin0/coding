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
	int n,t,ll,ul,s,m,tails,a,b,temp,temp2;
	scanf("%d %d",&n,&t);
	s = pow(2,n)-1;
	//printf("\n  n=%d  t=%d  s=%d  ss=%d",n,t,s,ss);
	while(t--)
	{
		scanf("%d %d %d",&m,&ll,&ul);
		//printf("\n  m=%d  ll=%d  ul=%d",m,ll,ul);
		if(m==0)
		{
			b=pow(2,ul+1)-1;
			a=pow(2,ll)-1;
			temp = b-a;
			//printf("\n  s=%d  ",s);
			s = xor(s,temp);
			//printf("  temp=%d   s(XORed)=%d    ",temp,s);
		}
		else
		{
			b=pow(2,ul+1)-1;
			a=pow(2,ll)-1;
			//temp=xor(s,ss);//1=head
			temp2= b-a;//ul+1,ll+1-1
			temp = s&temp2;
			tails = 0;
			while(temp)
			{
				if(temp%2)
					tails++;
				temp = temp>>1;
				//printf("\n   temp=%d  heads=%d  ",temp,heads);
			}
			printf("\n%d",ul-ll+1-tails);
		}
	}
	//printf("\n%d",s);
	return 0;
}