#ifndef ONLINE_JUDGE
    #define gc getchar
	#define pc putchar
#else
	#define pc putchar_unlocked
    #define gc getchar_unlocked
#endif


#include <stdio.h>
inline void scanlonglongint(long long int *y)
{
 register long long int c = gc();
 register long long int x = 0;
 register long long int sign = 1;
 for(;(c<48 || c>57);c = gc())
 	if(c=='-')
 		sign = -1;
  
 for(;c>47 && c<58;c = gc())
 {
   x = (x<<1) + (x<<3) + c - 48;
 }
 x = x*sign;
 *y = x;
}

long long int gcd(long long int a,long long int b)
{
   long long int temp;
   while(a)
   {
      temp = a;
      a = b % a;
      b = temp;
   }
   return b;
}
inline void printlonglongint(long long int n)//only prints non-negative nos
{
	if(n == 0)
	{
		pc('0');
		pc('\n');
	}
	else if(n == -1)
	{
		pc('-');
		pc('1');
		pc('\n');
	}
	else
	{
		char buf[21];
		buf[20] = '\n';
		int i = 19;
		while(n)
		{
			buf[i--] = (char)(n % 10 + 48);
			n /= 10;
		}
		while(buf[i] != '\n')
			pc(buf[++i]);
	}
}
int main() {
	long long int t;
	//cin>>t;
	scanlonglongint(&t);
	long long int n,i,j,sum;
	while(t--)
	{
	   //cin>>n;
		scanlonglongint(&n);
	   sum=0;
	   for(i=1;i<=n;i++)
	      sum+=(n/(gcd(i,n)));
	   //printf("%d\n",sum);
	  	printlonglongint(sum);//prints longlongint and a newline in the end
	}
	return 0;
}