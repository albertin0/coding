#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void scanint(int *y)
{
 register int c = gc();
 register int x = 0;
 for(;(c<48 || c>57);c = gc())
  ;
 for(;c>47 && c<58;c = gc())
 {
   x = (x<<1) + (x<<3) + c - 48;
 }
 *y = x;
}
int main()
{
	int n,n1,n2,d1,d2,carry,co;
	scanint(&n);
	while(n--)
	{
		scanint(&n1);
		scanint(&n2);
		co = carry = 0;
		while(n1!=0&&n2!=0)
		{
			d1 = n1%10;
			d2 = n2%10;
			n1 = n1/10;
			n2 = n2/10;
			if(d1+d2+co>9)
				carry++;
			co=(d1+d2+co)/10;	
		}
		if(carry==0)
			//cout<<"No carry operation"<<endl;
			printf("No carry operation\n");
		else if(carry==1)
			//cout<<"1 carry operation"<<endl;
			printf("1 carry operation\n");
		else
			printf("%d carry operations\n",carry);
	}
	return 0;
}