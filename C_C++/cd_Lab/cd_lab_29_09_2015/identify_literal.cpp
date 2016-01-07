#include<iostream>
#include<string>
#include<cstring>
#include<stdlib.h>

using namespace std;

int main()
{
	string st[5]={"int","char","string","double","float"},str;	int i;
	cin>>str;

	for(i=0;i<5;i++){
		if(str==st[i]){
			cout<<"Not a valid indentifier";
			return 0;
		}
	}
	if(!(str[0]=='_'||isalpha(str[0]))){
		cout<<"Not a valid identifier";
		return 0;
	}
	for(i=1;i<str.length();i++){
		if(!(str[i]=='_'||isalpha(str[i])||isdigit(str[i]))){
			cout<<"Not a valid identifier";
			return 0;
		}
	}
	cout<<"valid identifier";
	return 0;
}
