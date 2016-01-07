#include <iostream>
#include <cmath>

using namespace std;
int main()
	{
		int a,i;
		cin>>a;
	    int j,len,fir,las;
	    j=a;
	    i=0;
	    while(j>0)
	    {
	        j=j/10;		i++;
	    }
	    len = i;
	    cout<<"len ="<<len<<"   ";
	    for(i=1;i<=a/2;i++)
	    {
	        fir = (double)a/(pow(10.0,(--len)));
	        las = a%10;
	        if(fir!= las)  cout<<endl<<fir<<"  "<<las<<"   Not a Pallindrome";
	        a = a - (int)(fir*(pow(10.0,len+1)));//minus
	        a = a/10;
	        //len--;
	    }
	    cout<<"Pallindrome";
	    return 0;
	}

