#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
#define coutln(k) cout<<"line "<<k<<endl; 

int main()	{
	int t,lPtr,rPtr,cases,carry,isEven,temp,midPtr,i,j,len;
	string n;
	bool pallin;
	//ofstream fPtr;
	//fPtr.open("./test.txt");
	cin>>t;
	//t=-1;
	//while(t++<1000)	{
	while(t--)	{
		cin>>n;
		//n = "";
		/*while(t)	{
			i = ((t%10)+48);
			n = i + n;
			t /= 10;
		}
		cout<<n;*/
		len = n.length();
		cases = carry = 0;	
		pallin = false;
		isEven = (len & 1)? 0 : 1 ;
		lPtr = floor(len/2) - 1;
		rPtr = floor(len/2);
		if(!isEven)		{
			midPtr = rPtr;
			rPtr++;
		}
		if(len==1)	{
			if(n.compare("9")!=0)	
				n[midPtr]++;
			else
				n = "11";
		}
		//cout<<isEven<<"\t"<<lPtr<<"\t"<<rPtr<<"\t"<<endl;
		while(cases==0 && lPtr>=0 && rPtr<=(len-1))	{
			if(n[lPtr] == n[rPtr])	{
				if(lPtr==0 && rPtr==len-1)	pallin = true;
				lPtr--;	rPtr++;
				//coutln(__LINE__);
			}
			else if(n[lPtr] > n[rPtr])	{
				//coutln(__LINE__);
				n[rPtr] = n[lPtr];
				lPtr--;	rPtr++;
				cases = 2;
			}
			else	{// if n[lPtr]<n[rPtr]
				//coutln(__LINE__);
				cases = 1;
				i = lPtr;	j = rPtr;
				lPtr = floor(len/2) - 1;
				rPtr = floor(len/2);
				if(!isEven)		rPtr++;
			}
		}
		if(pallin)	{
			//coutln(__LINE__);
			cases = 1;
			i = -1;
			j = len;
			lPtr = floor(len/2) - 1;
			rPtr = floor(len/2);
			if(!isEven)		rPtr++;
		}
		while(cases == 1 && lPtr>=0 && rPtr<=len-1)	{
			//coutln(__LINE__);
			if(carry==0)	{
				if(!isEven)		{
					temp = n[midPtr] + 1 - 48;
						if(temp>9)	{
							temp = temp -  10;
							carry = 1;
						}
						else	{
							cases = 2;
							lPtr = i;	rPtr = j;
						}
						n[midPtr] = temp + 48;
				}
				else	{ // if even
					if(n[lPtr]>n[rPtr])		{//this case will never arise as if it would have been there
											//it would have been already resolved.
						n[rPtr] = n[lPtr];
						cases = 2;
						lPtr = i;	rPtr = j;
					}
					else	{ // if n[lPtr] is <= n[rPtr]
						temp = n[lPtr] + 1 - 48;
						if(temp>9)	{
							temp = temp -  10;
							carry = 1;
							n[lPtr] = n[rPtr] = temp + 48;
							lPtr--;	rPtr++;
						}
						else	{
							cases = 2;
							n[lPtr] = n[rPtr] = temp + 48;
							lPtr = i;	rPtr = j;
						}
					}
				}
			}
			else	{//carry=1
				temp = n[lPtr] + 1 - 48;
				if(temp>9)	{
					temp = temp -  10;
					carry = 1;
					n[rPtr] = n[lPtr] = temp + 48;;
					lPtr--;	rPtr++;
				}
				else	{
					cases = 2;//if no carry
					n[rPtr] = n[lPtr] = temp + 48;
					lPtr = i;	rPtr = j;
				}
			}
		}
		if(cases == 1)	n = "1" + n.substr(0,n.length()-1) + "1";
		while(cases == 2 && lPtr>=0 && rPtr<=(n.length()-1))	{ 
			//coutln(__LINE__);
			n[rPtr] = n[lPtr];
			lPtr--;		rPtr++;
		}
		cout<<n<<endl;
		//fPtr<<t;
		//fPtr<<"\t\t\t"+n<<endl;
	}
	//fPtr.close();
	return 0;
}