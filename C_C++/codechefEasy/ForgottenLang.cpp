#include<iostream>

using namespace std;

int main()
{
	int t,n,k,l,i,j,size;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		cin>>k;
		String forgot[n];
		boolean f[n];
		for(i=0;i<n;i++)
		{
			cin>>forgot[i];
			f[i] = false;
		}
		//String modern[][] = new String[k][];
		for(i=0;i<k;i++)
		{
			cin>>size;
			//modern[i] = new String[size];
			String temp[size];
				
			for(j=0;j<temp.length;j++) //modern[i].length=size
			{	
				cin>>temp[j];
				for(l=0;l<n && !f[l];l++)
					if(forgot[l].equals(temp[j]))
						f[l]=true;
			}
			
			for(i=0;i<n;i++)
				if(f[i])
					System.out.print("YES ");
				else
					System.out.print("NO ");
			System.out.println();
			t--;
}