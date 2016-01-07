#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,i,in,chk[310723];
	int t,first,last,middle,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&in);
		i=0;
		n=0;
		while(n<pow(10,16))
		{
			i=i+1;
			n=n+(i*i);
			chk[i-1]=n;
		}
		first = 0;
   		last = 310723 - 1;
   		middle = (first+last)/2;
 
   		while (first <= last) 
   		{
      		if (chk[middle] < in)
         			first = middle + 1;    
      		else if (chk[middle] == in) 
      		{
         		ans = middle+1;
         		break;
         	}
         	else
         		last = middle - 1;
         	middle = (first + last)/2;
        }
        if (first > last)
        	ans = first-1+1;
		//if(n<0)
		//	i--;
		printf("\n%lld",ans);
	}
	return 0;
}