#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int primeNos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};//0 to 167
    bool pn[1000001];
    memset(pn,true,sizeof(pn));
    int n,i,j,temp,faclen;
    for(i=0;i<168;i++)
    {
    	j=primeNos[i];
    	while(j<=1000000)
    		pn[j+=primeNos[i]]=false;
    }
    int pns[78498];
    for(i=j=2;i<1000000;i++)
    	if(pn[i])
    		pns[j++]=i;

    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
        
        faclen = 0;
        for(j=0;pns[j]<=temp && j<78498;j++)
        {
            temp = arr[i];
            while(temp>0)
            {
                temp /= pns[j];
                faclen+= temp;
            }                
        }
        arr[i] = faclen;
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
