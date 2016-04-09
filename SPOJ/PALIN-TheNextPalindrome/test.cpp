#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>
using namespace std;
string add1(string n)	{
	int i,temp,carry;
	string ret = "";
	carry = 1; // as we are adding 1
	for(i=n.length()-1;i>=0;i--)	{
		temp = n[i] - 48 + carry;
		if(temp>9)	{
			temp %= 10;
			carry = 1;
		}
		else
			carry = 0;
		ret = to_string(temp + 48) + ret;
	}
	if(carry)
		ret = to_string(carry+48) + ret;
	return ret;
}
int main()	{
	string in;
	int i,j;
	cin>>in;
	cout<<in<<endl;
	/*for(i=0;i<in.length();i++)	{
		j = in[i]+=1;
		cout<<j;
	}
	cout<<endl;*/
	in = add1(in);
	cout<<in<<endl;

	return 0;
}