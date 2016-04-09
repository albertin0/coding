#include <iostream>
using namespace std;

long long min3(long long r,long long g,long long b)   {
   if(r<g){
      if(r<b)  return r;
      else     return b;
   }
   else  {//g<=r
      if(g<b)  return g;
      else     return b;
   }
}

long long min2(long long r,long long g,long long b)   {
   if((r-g)*(b-g)<=0)   return g;
   if((g-r)*(b-r)<=0)   return r;
   if((r-b)*(g-b)<=0)   return b;
}

long long cal(long long r,long long g,long long b,long long k) {
   long long i,j,min_3,min_2,ret;
   min_3 = min3(r,g,b);
   if(k-1<=min_3)   {  
      ret = (k-1)*3 + 1;   //extra 1 will obviously make the one group==k
      return ret;
   }
   else {
      ret = min_3*3;
      k -= min_3;
      min_2 = min2(r,g,b);
      if(k-1<=(min_2-min_3))   {
         ret += (k-1)*2 + 1;
         return ret;
      }
      else  {
         ret += (min_2 - min_3)*2;
         k -= min_2 - min_3;
         ret += k;
         return ret;
      }
   }
}

int main() {
	// your code goes here
	long long t,r,g,b,i,k,picks;
	cin>>t;
	while(t--)  {
	   cin>>r>>g>>b;
	   cin>>k;
	   picks = cal(r,g,b,k);
	   cout<<picks<<endl;
	}
	return 0;
}
