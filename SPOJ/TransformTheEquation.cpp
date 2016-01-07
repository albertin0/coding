#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
bool isOperand(char a)
{
	if(((int)a>=65&&(int)a<=90)||((int)a>=97&&(int)a<=122))
		return true;
	else
		return false;
}
bool isOperator(char a)
{
	if(a=='+'||a=='-'||a=='*'||a=='/'||a=='^')
		return true;
	else
		return false;
}
bool isOpenParen(char a)
{
	if(a=='(')
		return true;
	else
		return false;
}
bool isLowerPrecedence(char a1,char a2)
{
	int p1,p2;
	switch(a1)
	{
		case '+':	p1=1;	break;
		case '-':	p1=2;	break;
		case '/':	p1=3;	break;
		case '*':	p1=4;	break;
		case '^':	p1=5;	break;
	}
	switch(a2)
	{
		case '+':	p2=1;	break;
		case '-':	p2=2;	break;
		case '/':	p2=3;	break;
		case '*':	p2=4;	break;
		case '^':	p2=5;	break;
	}
	if(p1<p2)
		return true;
	else
		return false;
}
int main()
{
	int t;
	cin>>t;
	stack<char> stk;
	while(t--)
	{
		string s,r;
		cin>>s;
		int i;
		for(i=0;i<s.length();i++)
		{
			if(isOperand(s[i]))
				r+=s[i];
			else if(isOperator(s[i]))
			{
				while(!stk.empty() && !isLowerPrecedence(stk.top(),s[i]) && !isOpenParen(stk.top()))
				{
					r+=stk.top();
					stk.pop();
				}
				stk.push(s[i]);
			}
			else if(isOpenParen(s[i]))
				stk.push(s[i]);
			else//closeParen
			{
				while(!isOpenParen(stk.top()))
				{
					r+=stk.top();	stk.pop();
				}
				stk.pop();//to pop '(' 
			}
		}
		while(!stk.empty())
		{
			r+=stk.top();	stk.pop();
		}
		cout<<r<<endl;
	}
	return 0;
}
				
