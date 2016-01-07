#include<stdio.h>
int main()
{
  int t;
  char s[101];
  scanf("%d\n",&t);
  while(t--)
  {
  	
   //char c=getchar();
   gets(s);
 
    int i;
    for(i=0;s[i]!='\0';i++)
    {
      if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
      {
 
       ++s[i];
       if(s[i]=='{')
        s[i]='a';
       if(s[i]=='[')
        s[i]='A';
       printf("%c",s[i]);
 
    }
    }
    puts("");
 
  }
  return 0;
}