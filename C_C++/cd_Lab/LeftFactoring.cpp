#include<iostream>
#include<cstring>


using namespace std;
int main()
{
	string p1,p2;
	cin>>p1>>p2;
	string s1,s2,s3;
	int i,sub=0;
	for(i=0;i<p1.length();i++)
	{
		if(p1.at(i)==p2.at(i))
			sub++;
		else
			break;
	}

	s1 = p1.substr(0,sub);
	s1.append("X");
	s2 = s3 = p1.substr(0,3);
	string temp;
	temp = p1.substr(sub-1+1,(p1.length()-1)-(sub-1+1)+1);//length() & sub both starts counting form 1;
	s2.append(temp);
	temp = p2.substr(sub-1+1,(p2.length()-1)-(sub-1+1)+1);//length() & sub both starts counting form 1;
	s3.append(temp);
	
	cout<<endl<<s1<<endl<<s2<<endl<<s3;
	return 0;
}