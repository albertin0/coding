#include<iostream>
#include<cstring>
using namespace std;
string add2(int,int*);
string add2(int a,int *c)	{
	string res;
	//int t = a+*c;
	if(a+*c<=9)	{
		*c = 0;
		res = (char)a + (char)(*c);
	}
	else	
		res = (char)((a+*c)%10);
	return res;
}

 int main()
 {
 	string in,t;
 	int flag=0,i,j,temp,len,midi,lenodd=1,c;
 	cin>>in;
 	c=0;
 	for(i=in.length()-1;i>=0;i--)	{
 		t = add2((int)(in[i]-48),&c) + t;
 		cout<<t<<endl;
 	}
 	if(c==1)	t = "1"+t;
 	cout<<t;
 	/*
 	len = in.length();
 	if(len%2==0)	{
 		midi = len/2;	lenodd=0;
 	}
 	else	{
 		midi = len/2;	lenodd=1;
 	}
 	for(i)*/
 	return 0;
 }
