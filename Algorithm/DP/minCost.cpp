/*  this is the recursive approach FOR SOLVING min cost from (0,0) to (m,n)
 *  */
#include<iostream>
using  namespace std;
int cost[4][4];
int min(int a, int b ,int c)
{
	if(a<b)
	{
		if(a<c)
			return a;
		else
			return c;
	}
	else
		if(b<c)
			return b;
		else
			return c;
}
int mincost(int arr[4][4], int m, int n)
{
	if(m<0||n<0)
		return 9999999;
	else if(m==0&&n==0)
		return arr[m][n];
	else
	{
		return arr[m][n] + min(mincost(arr,m-1,n-1),mincost(arr,m-1,n),mincost(arr,m,n-1));
	}
}
main()
{
	for(int i =0;i<4;i++)
	{
		for(int j =0;j<4;j++)
			cin>>cost[i][j];
	}
	int p,q;
	cin>>p>>q;
	cout<<mincost(cost,p,q)<<endl;
}

