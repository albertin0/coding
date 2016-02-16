#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int t,i,j,k;
	string in,temp,out;
	cin>>t;
	stack<char> paren;
	while(t--)
	{
		cin>>in;
		for(i=0;i<in.size();i++)
		{
			if(in[i]=='(')
				paren.push('(');
			else if(in[i]==')' && !paren.empty())
				paren.pop();
		}
		temp = "";
		for(i=0;i<paren.size();i++)
			temp+=")";
		out = in + temp;
		for(i=in.size()-1;i>=0;i--)
		{
			if(in[i]==')')
				paren.push(')');
			else if(in[i]=='(' && !paren.empty())
				paren.pop();
		}
		temp = "";
		for(i=0;i<paren.size();i++)
			temp+="(";
		out = temp + out;

		cout<<out<<endl;
	}
	return 0;
}