#include<iostream>
#include<cstdio>
using namespace std;
 int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
		int n,m;
		int flag = 1;
		scanf("%d %d",&n,&m);
		int  arr [n];
		int tmp;
		for(int i =1;i<=n;i++)
		{
			scanf("%d ",&arr[i-1]);
	}
		int l,r;
		for(int i =1;i<=m;i++)
		{
			scanf("%d %d",&l,&r);
			arr[l-1] = 0;
			arr[r-1] = 0;
		}
		for(int i =1;i<=n;i++)
		{
			if(arr[i-1]!=0&&arr[i-1]!=i)
			{
				printf("Impossible\n");
				flag =0;
//				for(int j =0;j<n;j++)
//					printf("%d ",arr[j]);
				break;
			}
		}
		if(flag==1)
		printf("Possible\n");
//		 for(int j =0;j<n;j++)
//			 printf("%d ",arr[j]);



	}


	return 0;
}
