#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	int t,tempm,temph;
	double h,a,m,handAng;
	cin>>t;
	while(t--)
	{
		cin>>a;
		//cout<<endl<<a;
		for(h=0.0;h<12.0;h=h+1.0){
			temph=h;
			for(m=0.0;m<60.0;m=m+1.0){
				tempm=m;
				handAng=fabs(30.0*h-(11.0/2.0)*m);
				if(handAng>180.0)	handAng=360.0-handAng;
				if(fabs(handAng-a)<=1.0/120.0){
					//printf("\n%lf",fabs(30*h-(11/2)*m));
					printf("\n%02d:%02d",temph,tempm);
				}
			}	
		}

	}
	return 0;
}