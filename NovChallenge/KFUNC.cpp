#include <iostream>
using namespace std;

long long int fun(long long int a)
{
   if(a%9)
      return a%9;
   else
      return 9;
}
int main() {
   int t;
   long long int a,d,l,r,i,j,sum;
   cin>>t;
   while(t--)
   {
      cin>>a>>d>>l>>r;
      d = fun(d);
      if(l==1)
         a = fun(a);
      else
         a = fun(fun(a) + fun(fun(l-1)*d));
      long long int first = a, nos = r-l+1;
      sum = 0;
      if(nos>9)
      {
         long long int pat[9],k=0,flag=0;
         while(!flag)//flag!=1
         {
            pat[k++] = a;
            a = fun(a+d);
            for(j=0;j<k;j++)
            {
               if(pat[j]==a)
               {
                  flag=1;  break;
               }
            }
         }
         long long int sets = nos/k;
         long long int rem  = nos % k;
         for(i=0;i<k;i++)
         {   sum+=pat[i];
            //cout<<" "<<pat[i];
         }
         sum=sum*sets;
         a = first;
         for(i=1;i<=rem;i++)
         {
            sum+=a;
            a = fun(a+d);
         }
      
      }
      else
      {
         for(i=l;i<=r;i++)
         {
            sum += a;
            a = fun(a+d);
         }
      }   
         cout<<sum<<endl;
   }
	return 0;
}