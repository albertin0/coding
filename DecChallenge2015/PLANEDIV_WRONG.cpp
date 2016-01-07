#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	//for memset()
#include <math.h>	//for fabs()
#define P 1000000000.0
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
	int t,n,i,n1,n2,n3,lim,max;
	scanint(&t);
	while(t--)
	{
		scanint(&n);
		int arr[n+2][4];//n+2 if all slopes are distinct and also not = to 0 and infinity
		//memset(arr,0,sizeof(arr));
		arr[0][0]=arr[0][2]=arr[0][3]=0; arr[0][1]=1;	//(x coefficient)A=0
		arr[1][1]=arr[1][2]=arr[1][3]=0; arr[1][0]=1;	//(y coefficient)B=0
		lim=2;// since 2 slopes initialised;
		while(n--)
		{
			scanint(&n1);//A
			scanint(&n2);//B	
			scanint(&n3);//C
			if(n1==0)//i.e. A=0
			{	arr[0][3]++;	continue;	}
			if(n2==0)//i.e. B=0
			{	arr[1][3]++;	continue;	}
			for(i=2;i<lim;i++)
			{
				//cout<<sizeof((int)(((double)n2/(double)n1)-((double)arr[i][1]/(double)arr[i][0])))<<endl;
				if( roundf(fabs(((double)n1/(double)n2)-((double)arr[i][0]/(double)arr[i][1]))*P)/P<1/P && //slope matches
					roundf(fabs(((double)n3/(double)n1)-((double)arr[i][2]/(double)arr[i][0]))*P)/P>1/(P*10)	)//lines not overlap
				{	arr[i][3]++;	break;	}
			}
			if(i==lim)//slope didn't match
			{
				arr[i][0]=n1;	arr[i][1]=n2;	arr[i][2]=n3;	arr[i][3]=1;	//new sub-set of line is initialised
				lim++;
			}	
		}
		max=0;
		for(i=0;i<lim;i++)
			if(arr[i][3]>max)
				max = arr[i][3];
		cout<<max<<endl;
	}
	return 0;
}