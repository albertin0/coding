#include <iostream>
#include <cmath>
#include <string>
using namespace std;
#define coutln(k) cout<<"line "<<k<<endl; 

int lPtrCal(int n,int isEven)	{
	if(isEven)	
		return (floor(n/2) - 1);
	else
		return (floor(n/2)-1);
}
int rPtrCal(int n,int isEven)	{
	if(isEven)	
		return floor(n/2);
	else
		return (floor(n/2)+1);
}
string add1(string n)	{
	int i,temp,carry;
	string ret = "";
	carry = 1; // as we are adding 1
	for(i=n.length()-1;i>=0;i--)	{
		temp = n[i] - 48 + carry;
		if(temp>9)	{
			temp = temp -  10;
			carry = 1;
		}
		else
			carry = 0;
		ret = to_string(temp) + ret;
	}
	if(carry)
		ret = to_string(carry) + ret;
	return ret;
}
int main()	{
	int t,lPtr,rPtr,flag1,flag2,carry,isEven,temp,midPtr,i,j;
	string n,innitialStr;
	cin>>t;
	while(t--)	{
		cin>>n;
		n = add1(n);
		//cout<<"\t"<<n<<endl;
		innitialStr = n;
		flag1= flag2= carry= 0;	
		isEven = (n.length() & 1)? 0 : 1 ; 
		lPtr = lPtrCal(n.length(),isEven);
		rPtr = rPtrCal(n.length(),isEven);
		if(!isEven)		midPtr = floor(n.length()/2);
		//cout<<isEven<<"\t"<<lPtr<<"\t"<<rPtr<<"\t"<<endl;
		while(lPtr>=0 && rPtr<=(n.length()-1))	{
			//coutln(__LINE__);
			if(flag2==0 && flag1==0)	{ //00 means 1st interation from the middle
				//coutln(__LINE__); 
				if(n[lPtr] == n[rPtr])	{
					//coutln(__LINE__);
					lPtr--;	rPtr++;
				}
				else if(n[lPtr] > n[rPtr])	{
					//coutln(__LINE__);
					n[rPtr] = n[lPtr];
					lPtr--;	rPtr++;
					flag2 = 1;
					//flag2 = 0;	flag1 = 1;
				}
				else	{
					//coutln(__LINE__);
					//lPtr = lPtrCal(n.length(),isEven);
					//rPtr = rPtrCal(n.length(),isEven);
					flag2 = 0;	flag1 =1;
					i = lPtr;	j = rPtr;
					//n = innitialStr;
				}
			}
			else if(flag2 == 0 && flag1 == 1)	{	//01 set means 2nd iteration from middle
				//coutln(__LINE__);
				if(carry==0)	{
					if(!isEven)		{
						//coutln(__LINE__);
						temp = n[midPtr] + 1 - 48;
						if(temp>9)	{
							temp = temp -  10;
							carry = 1;
						}
						else	{
							flag2 = 1;
							lPtr = i;	rPtr = j;
						}
						n[midPtr] = temp + 48;
					}
					else	{ // if even
						if(n[lPtr]>n[rPtr])		{
							n[rPtr] = n[lPtr];
							flag2 = 1;
							lPtr = i;	rPtr = j;
						}
						else	{ // if n[lPtr] is <= n[rPtr]
							temp = n[lPtr] + 1 - 48;
							if(temp>9)	{
								temp = temp -  10;
								carry = 1;
							}
							else	{
								flag2 = 1;
								lPtr = i;	rPtr = j;
							}
							n[lPtr] = n[rPtr] = temp + 48;
						}
						lPtr--;	rPtr++;
					}
				}
				else	{//carry=1
					//coutln(__LINE__);
					if(n[lPtr] != n[rPtr])	{
						temp = n[lPtr] + 1 - 48;
						if(temp>9)	{
							temp = temp -  10;
							carry = 1;
						}
						else	{
							flag2 = 1;//if no carry
							lPtr = i;	rPtr = j;
						}
						n[rPtr] = n[lPtr] = temp + 48;;
					}
					lPtr--;	rPtr++;
				}
			}
			else	{ //flag 2 == 1
			//coutln(__LINE__);
				if(n[lPtr] != n[rPtr])	n[rPtr] = n[lPtr];
				lPtr--;		rPtr++;
			}
		}
		cout<<n<<endl;
	}
	return 0;
}