#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int f[n];
	for(int i =0;i<n;i++)
	{
		cin>>f[i];
	}
	sort(f,f+n);
	int i = n-1,ans= 0;
	while(i>=k)
	{
		ans+= 2*(f[i] - 1);
		i-= k;
	}
	ans+= 2*(f[i]-1);
	cout<<ans<<endl;

	return 0;
}
