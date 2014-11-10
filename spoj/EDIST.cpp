#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<cstdio>
int prev[3000];
int curr[3000];
using namespace std;
int min(int a , int b, int c)
{
	if(a<b)
		if(a<c)
			return a;
		else
			return c;
	else
		if(b<c)
			return b;
		else
			return c;
}
int editD(string a, string b) // this will calculate the edits required to change from A----> B
{
	int l = a.size();
	int m = b.size();
	for(int i =0;i<=m;i++)
		prev[i] = i;
	for(int i = 1;i<=l;i++)
	{
		curr[0] = i;
		for(int j =1;j<=m;j++)
		{
			if(a[i-1]==b[j-1])
				curr[j] = prev[j-1];
			else
				curr[j] = 1 +  min(prev[j-1],prev[j],curr[j-1]);
		}
		for(int j =0;j<m;j++)
		{
			prev[j] = curr[j];
		}
	}
	long long cost  = curr[m];
	return cost;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		cout<<editD(str1,str2)<<endl;
	}
	return 0;
}
