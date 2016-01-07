#include<iostream>
#include<ctype.h>
#include<conio.h>
#include<string.h>
#include<cstring>
using namespace std;
int precedence(char) ;
char s[20];
int top=-1;
void push(char);
int isoperator(char);
string pop();
int main()
{
string input;
char ch;
string postfix;
int j=0,i;
cout<<"Input infix expressions";
cin>>input;
for(i=0;i<input.length();i++)
{
input[i]=tolower(input[i]);
}

for(i=0;i<input.length();i++)
{
if(isoperator(input.at(i))) //1
{if(input.at(i)=='(')    //if-2
push(input.at(i));
else if(input.at(i)==')')
{
while(s[top]!='(')
postfix.push_back(pop());
pop();
}
else
{
if(precedence(input.at(i))>precedence(s[top]))
push(input.at(i));
else if(precedence(input.at(i))<=precedence(s[top]))
{
while(s[top]!='(')
{
postfix.push_back(pop());
if(precedence(input.at(i))<=precedence(s[top]))
continue;
}
push(input.at(i));
}
}

}// if-1
else
postfix.push_back(input[i])); //if-1 else
} //for loop
while(top>=0)
{
postfix.push_back(pop());
}
postfix.push_back('\0');
cout<<"Resultant postfix:"<<postfix;
return 0;
}

int precedence(char symbol)
{
switch(symbol)
{
case '^':return 6;
case '*':return 5;
case '/':return 5;
case '%': return 5;
case '+':return 4;
case '-':return 4;
default:return 0;
}
}
void push(char symbol)
{
s[++top]=symbol;
}
string pop(){
string popitem;
popitem=s[top--];
return popitem;
}
int isoperator(char c)
{
if(c=='(' || c==')' || c=='^'|| c=='*'  || c=='/' || c=='%' ||c=='+'||c=='-')
return 1;
else
return 0;
}
