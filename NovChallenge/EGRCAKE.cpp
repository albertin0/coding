#include<stdio.h>
//using namespace std;

int main()
{
	int m,n;
	int t,cakes_req,i,k;
	//cin>>t;
	scanf("%d",&t);
	while(t--)
	{
		//cin>>n>>m;
		scanf("%d",&n);
		scanf("%d",&m);
		cakes_req = n;
		bool index[n];
		for(i=0;i<n;i++)
			index[i]=false;
		//cout<<index[0];
		k=m+1;//m+1 being 1st position
		//index[k-1]=true;
		while(1)
		{
			if(index[k-1]==true)
				break;
			else
			{
				index[k-1]=true;
				cakes_req--;
				k = ((m+1) + k - 1)==n ? n : ((m+1) + k - 1)%n;	//index of kth position from m+1 being 1st position
			}
		}
		if(cakes_req)
			//cout<<"NO "<<cakes_req<<endl;
			printf("NO %d\n", cakes_req);
		else
			//cout<<"YES";
			printf("YES\n");
	}

	return 0;
}