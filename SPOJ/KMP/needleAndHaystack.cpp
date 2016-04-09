// C++ program for implementation of KMP pattern searching 
// algorithm
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 

int main()
{
  int nLen;
  string needle;
  bool flag;
  //cin>>t;
  while(cin>>nLen)  {
    cin>>needle;

    //calculates LPS Array
    int M = nLen;
    int len = 0;  // length of the previous longest prefix suffix
    int i,j;
    int lps[nLen];
    lps[0] = 0; // lps[0] is always 0
    i = 1;
 
    // the loop calculates lps[i] for i = 1 to M-1
    while (i < M)
    {
       if (needle[i] == needle[len])
       {
         len++;
         lps[i] = len;
         i++;
       }
       else // (pat[i] != pat[len])
       {
         if (len != 0)
         {
           // This is tricky. Consider the example 
           // AAACAAAA and i = 7.
           len = lps[len-1];
 
           // Also, note that we do not increment i here
         }
         else // if (len == 0)
         {
           lps[i] = 0;
           i++;
         }
        }
    }
    char c;
    i=j=0;
    if(cin.get(c))
      flag = true;
    else
      flag = false;
    while (flag)  //while (i < M)
    {
      if (needle[j] == c)
      {
        j++;  i++;
        
        if(cin.get(c))
          flag = true;
        else
          flag = false;
      }
 
      if (j == M)
      {
        //printf("Found pattern at index %d \n", i-j);
        cout<<i-j-1<<endl;
        j = lps[j-1]; //this enables to save time wrt naive algo
        //goes to previous pattern which has been matched
      }
 
      // mismatch after j matches
      else if (flag /*i < N*/ && needle[j] != c)
      {
        // Do not match lps[0..lps[j-1]] characters,
        // they will match anyway
        if (j != 0)
         j = lps[j-1];
        else  {
          i = i+1;
          if(cin.get(c))
            flag = true;
          else
            flag = false;
        }
      }
    }
    cout<<endl;
  }
  return 0;
}