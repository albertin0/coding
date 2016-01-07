#include<iostream>
#include<cstring>
#include<stack>
#include<algorithm>
#define flag '#'
using namespace std;
bool isOperator(char c)
{
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^'||c=='$')		return true;
	else		return false;
}
int main()
{
	stack<char> stk;
	char postfix[30],prefix[30];
	int i,j=0,len;
	cout<<endl<<"Input a postfix expression:";
	cin>>postfix;
	len=strlen(postfix);
	for(i=len-1;i>=0;i--)
	{
		if(isOperator(postfix[i]))
		{
			stk.push(postfix[i]);
			cout<<endl<<"if block ,"<<postfix[i]<<" element pushed in stack.";
		}
		else
		{
			prefix[j++]=postfix[i];
			cout<<endl<<"else block, "<<postfix[i]<<" element stored in prefix.";
			while(!stk.empty()&&stk.top()=='#')
			{
				cout<<endl<<"while block, ";
				cout<<endl<<stk.top()<<" element removed from stack."; 
				stk.pop();
				prefix[j++]=stk.top();
				cout<<endl<<stk.top()<<"element stored in prefix	";
				stk.pop();
				if(!stk.empty())
					cout<<endl<<"at the end of while block "<<stk.top()<<"element at top of stack";
				else
					cout<<endl<<"stack empty";
			}
			stk.push('#');
			cout<<endl<<"# element inserted at top of stack";
		}
	}
	prefix[i]=0;
	cout<<endl<<"The prefix expression is :"<<prefix;
	reverse(prefix,prefix+len);
	return 0;
}