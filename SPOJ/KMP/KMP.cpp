// C++ program for implementation of KMP pattern searching 
// algorithm
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 
//void computeLPSArray(char *pat, int M, int *lps);
void computeLPSArray(string pat, int M, int lps[]); 

void KMPSearch(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
 
    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    int lps[M];
    int j  = 0;  // index for pat[]
 
    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);
 
    int i = 0;  // index for txt[]
    while (i < N)
    {
      if (pat[j] == txt[i])
      {
        j++;
        i++;
      }
 
      if (j == M)
      {
        //printf("Found pattern at index %d \n", i-j);
        cout<<i-j<<endl;
        j = lps[j-1]; //this enables to save time wrt naive algo
        //goes to previous pattern which has been matched
      }
 
      // mismatch after j matches
      else if (i < N && pat[j] != txt[i])
      {
        // Do not match lps[0..lps[j-1]] characters,
        // they will match anyway
        if (j != 0)
         j = lps[j-1];
        else
         i = i+1;
      }
    }
}
 
void computeLPSArray(string pat, int M, int lps[])
{
    int len = 0;  // length of the previous longest prefix suffix
    int i;
 
    lps[0] = 0; // lps[0] is always 0
    i = 1;
 
    // the loop calculates lps[i] for i = 1 to M-1
    while (i < M)
    {
       if (pat[i] == pat[len])
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
    /*
    for(i=0;i<pat.length();i++)
      cout<<i<<"\t";
    cout<<endl;
    for(i=0;i<pat.length();i++)
      cout<<lps[i]<<"\t";
    cout<<endl;
    */
}
 
// Driver program to test above function
int main()
{
   //char *txt = "ABABDABACDABABCABAB";
   //char *pat = "ABABCABAB";
  int t,i;
  string txt,pat;
  cin>>t;
  while(t--)  {
    cin>>txt>>pat;
    /*for(i=0;i<txt.length();i++)
      cout<<i<<"\t";
    cout<<endl;
    for(i=0;i<txt.length();i++)
      cout<<txt[i]<<"\t";
    cout<<endl;*/
    KMPSearch(pat, txt);
  }
  return 0;
}