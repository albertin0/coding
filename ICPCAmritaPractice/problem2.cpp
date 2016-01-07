#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	string s;
	cin>>s;
	int i,len = s.length();
	char temp;
	for(i=0;i<(len/2);i++)
	{
		temp = s[i];
		s[i] = s[len-1-i];
		s[len-1-i] = temp;
	}
	cout<<s<<endl;
	return 0;
}