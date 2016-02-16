#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
	long long t,row[100001],col[100001],n,m,q,x,y,i,j,noD1inR,noD1inC,maxr,minr,maxc,minc,temp;
	long long tempmax,tempmin;
	cin>>t;
	while(t--)
	{
		memset(row,0,sizeof(row));
		memset(col,0,sizeof(col));
		cin>>n>>m>>q;
		row[1] = row[n] = col[1] = col[m] = 1;
		noD1inR = noD1inC = 2;
		for(i=1;i<=q;i++)
		{
			cin>>x>>y;
			if(row[x]==0)
			{
				row[x]=1;	noD1inR++;
			}
			if(col[y]==0)
			{
				col[y]=1;	noD1inC++;
			}
		}
		maxr = 1; minr = 100000;
		tempmin = tempmax = 1;
		for(i=2;i<=n;i++)
		{
			if(row[i]==1)
			{
				if(maxr<tempmax)
					maxr = tempmax;
				if(minr>tempmin)
					minr = tempmin;
				tempmax=tempmin=1;
			}
			else
			{
				tempmax++;
				tempmin++;
			}
		}
		maxc = 1; minc = 100000;
		tempmin = tempmax = 1;
		for(i=2;i<=m;i++)
		{
			if(col[i]==1)
			{
				if(maxc<tempmax)
					maxc = tempmax;
				if(minc>tempmin)
					minc = tempmin;
				tempmax=tempmin=1;
			}
			else
			{
				tempmax++;
				tempmin++;
			}
		}
		//cout<<noD1inR<<"  "<<noD1inC<<endl;
		cout<<(noD1inR-1)*(noD1inC-1)<<" "<<minc*minr<<" "<<maxc*maxr<<endl;
	}
	return 0;
}