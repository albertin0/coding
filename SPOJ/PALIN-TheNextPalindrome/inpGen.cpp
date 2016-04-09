#include <iostream>
#include <fstream>
using namespace std;

int main()	{
	ofstream fPtr;
	fPtr.open("./input.in");
	int t,i=1;
	cin>>t;
	fPtr<<t<<endl;
	while(i<=t)	
		fPtr<<i++<<endl;
	fPtr.close();
	return 0;
}