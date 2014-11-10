#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int minm(int a , int b)
{
	if(a<b)
		return a;
	else 
		return b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n ,s,tmp;
	bool flag = false;
	cin>>s>>n;
	int min[s+1];
	for(int i =1;i<=s;i++)
		min[i] = INT_MAX;
	min[0] = 0;
	int num[n];
	for(int i =0;i<n;i++)
		cin>>num[i];
	sort(num, num+n);
	for(int i = 0;i<n;i++)
	{
		tmp = num[i];
		for(int j = tmp;j<=s;j++)
		{
			min[j] = minm(min[j] , 1+ min[j-tmp]);
		}
	}
	if(min[s]!=INT_MAX)
		cout<<min[s]<<endl;
	else
		cout<<"No solution"<<endl;
	}
		return 0;
}
