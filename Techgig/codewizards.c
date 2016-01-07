#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
	char c;
	cin.get(c);
	if(c!='\n')
	{
		main();
		cout.put(c);
	}
	return 0;
}