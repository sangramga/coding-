#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;
int  main()
{	
	int t;
	vector<int> v;
	scanf("%d",&t);
	while(t--)
	{
		int m,n;
		scanf("%d %d",&n,&m);
		int tmp;
		for(int i =0;i<m;i++)
		{
			scanf("%d",&tmp);
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		int count =1;
		 for(int i =1;i<m;i++)
			                 {

						 cout<<v[i]<<" ";
					 }
		 cout<<endl;
		for(int i =1;i<m;i++)
		{
			if(v[i]!=v[i-1])
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}

