#include<stdio.h>
#include<math.h>
//using namespace std;

int main()
{
	int t,n,i;
	bool flag;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		flag=true;
		scanf("%d",&a[0]);
		scanf("%d",&a[1]);
		for(i=2;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<a[i-2])
				flag=false;
			
		}
		if(flag==false)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}