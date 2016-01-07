#include<stdio.h>
#include<math.h>
int main()
{
    int test,p,s;
    double z,f;
    scanf("%d",&test);
    while(test--)
    {
                 scanf("%d %d",&p,&s);
                 z=(p-(sqrt((p*p)-(24*s))))/(12);   // since 2nd derivative is -ve for z<=(p/3)
                 f= z*(z*z-p*z/4+s/2);
                 printf("\n%0.2f",f);
    }
   
    return 0;
}