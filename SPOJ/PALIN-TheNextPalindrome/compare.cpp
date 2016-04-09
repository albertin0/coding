#include <iostream>
#include <fstream>

using namespace std;

int main()	{
	ifstream fPtr1 ("./output.o");
	ifstream fPtr2 ("./outputNaive.o");
	string s1,s2;
	while(getline(fPtr1,s1) && getline(fPtr2,s2))	{
		if(s1.compare(s2))	{
			cout<<s1<<endl;
		}
	}
	return 0;
}