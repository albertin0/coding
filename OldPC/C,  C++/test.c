#include <stdio.h>

int main()
{
  int a = (int)0xffffffffff;
  printf("%d",a);
}
/*void perform(int, int);
int comb(int , int);
int main(void)
{
  int tc,i,n,l,r;
  scanf("%d",&tc);
  for(i=0;i<tc;i++)
  {
    scanf("%d%d%d",&n,&l,&r);
    perform(n,r-l+1);
  }
  return 0;
} 
void perform(int n, int x)
{
  int i,out=0,j;
  for(i=1;i<=n;i++)
  {
    if(i>x)
      break;
    for(j=1;j<=i;j++)
    {
      out+=comb(x,j);
    }
  }
  out=out % 1000003;
  printf("%d\n", out);  
}
int comb(int a, int b)
{
  int a1=1 , b1=1;
  while(b)
  {
    b1*=b;
    a1*=a;
    b--; a--;
  }
  return(a1/b1);
}*/