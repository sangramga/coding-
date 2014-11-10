#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<limits.h>
using namespace std;
int max(int a ,int b)
{
	return (a>b) ? a: b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,minm = INT_MAX,maxm = INT_MIN,t;
		cin>>n>>m;
		for(int i =0;i<m;i++)
		{
			cin>>t;
			if(t<minm)
				minm = t;
			if(t>maxm)
				maxm = t;
		}
		for(int i =0;i<n;i++)
		{
			cout<<max(abs(minm-i), abs(maxm - i))<<" ";
		}
		cout<<endl;
	}

			
	return 0;
}
