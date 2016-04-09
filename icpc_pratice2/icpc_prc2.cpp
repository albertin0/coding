#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif


#include <stdio.h>

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
	int count=0,sum=0,t,n,i,k,count1 =1,count2 = 1;
	scanint(&t);
	while(t>0){
		t--;
		scanint(&n);
		int ar[n];
		for(i=0;i<n;i++){
			scanint(&ar[i]);
		}
		for(i=0; i<n; i++){
			int j=i+1;
			while(j<n){
				if(count%2==0){
					if(ar[j]==ar[i]+1||ar[j]==ar[i]-1)
						count++;
					if(ar[j]==ar[i])
						count1++;
					}
					else{
						if(ar[j]==ar[i])
							count++;
						if(ar[j]==ar[i]+1||ar[j]==ar[i]-1)
						count2++;
					}
					j++;
				}
				sum+=count/2;
				count = 0;
			}
			
		}
		sum+=n;
			printf("%d\n",sum);

	return 0;
}
