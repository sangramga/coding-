/* in this program I will be solving the min cost problem suing dynamic programming concept
 * bottom up approach i.e. tabulation
 * time complexity = O(nm)
 */
#include<iostream>
#include<stdlib.h>
using namespace std;
#define l  4
#define b  4
int cost[l][b];
int min(int a, int d , int c)
{
	if(a<d)
		return (a<c) ? a:c;
	else
		return (d<c) ?d:c;
}
int mincostDP(int cost[l][b], int m , int n)
{
	int fin[l][b];
	fin[0][0] = cost[0][0];
	for(int i =1;i<l;i++)
		fin[i][0] = fin[i-1][0] + cost[i][0];
	for(int i =1;i<b;i++)
		fin[0][i] = fin[0][i-1] + cost[0][i];
	for(int i = 1;i<=m;i++)
	{
		for(int j =1;j<=n;j++)
			fin[i][j] = min(fin[i-1][j] , fin[i][j-1],fin[i-1][j-1]) + cost[i][j];
	}
	return fin[m][n];
}
main()
{
	for(int i =0;i<l;i++)
		for(int j =0;j<b;j++)
			cin>>cost[i][j];
	int m,n;
	cin>>m>>n;
	cout<<mincostDP(cost,m,n)<<endl;
}
