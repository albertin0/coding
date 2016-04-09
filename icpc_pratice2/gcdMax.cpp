#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
void scanint(int *y)
{
 register int c = gc();
 register int x = 0;
 for(;(c<48 || c>57);c = gc())
  ;
 for(;c>47 && c<58;c = gc())
 {
   x = (x<<1) + (x<<3) + c - 48;//x*10+(ASCII or UTF-8 value of new char c-48);
 }
 *y = x;
}
int gcd_finder(int a,int b)
{
   int temp;
   while(a)
   {
      temp = a;
      a = b%a;
      b = temp;
   }
   return b;
}
int main()
{
   int n,k,gcd,i,j,maxj,max;
   scanint(&n);   scanint(&k);
   int a[n];
   for(i=0;i<n;i++)
      scanint(&a[i]);
   max = 0;
   for(i=1;i<n;i++)
   {
      maxj = 0;
      gcd = a[i-1];  j=i;
      while(gcd>=k && j<n)
      {
         maxj++;
         gcd = gcd_finder(gcd,a[j]);
         j++;
      }
      if(maxj>max)
         max = maxj;
   }
   if(max==0)
      cout<<0;
   else
      cout<<max+1;
   return 0;
}
