#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	string p1,p2;
	string s1,s2;
	int i;
	cin>>p1>>p2;
	if(p1.at(0)==p1.at(3))//lr exists in p1
	{
		s1 = p2;	s1.append("X / ^");
		s2 = p1;
		s2.at(0)='X';
		for(i=4;i<s2.length();i++)
		{
			s2.at(i-1) = s2.at(i);
		}
		s2.at(i-1)='X';
	}
	cout<<"After removal of left-Recursion\n";
	cout<<s1<<endl<<s2;
	return 0;
}