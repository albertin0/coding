#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	string s="";
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			s+=j+'0';
			cout<<s<<"  ";
		}
		
	}
	/*scanf("%c",&i);
	if((int)i==10)
	s+='a';
	s+='b';
	cout<<s<<endl;
	cout<<(int)i<<endl;
	/*i=1;j=2;
	s+=i+'0';
	s+=j+'0';
	cout<<s<<endl;*/
	return 0;
}