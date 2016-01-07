#include<iostream>

static long gcd(long a, long b) {
  long r, i;
  while(b!=0){
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main()
{
  long long int t,n,i,j,temp;

  cin>>t;
  while(t--)
  {
	  cin>>n;
	  int a[n];
	  for(i=0;i<n;i++)
	  	cin>>a[i];
	  
	  
	}
 return a;
}