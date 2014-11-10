#include<iostream>
using namespace std;
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
main()
{
	int n;
	cin>>n;
	int num[n];
	int l[n];
	for(int i =0;i<n;i++)
	{
		cin>>num[i];
		l[i] = 1;
	}
	for(int i =1;i<n;i++)
		for(int j = i-1;j>=0;j--)
		{
			if(num[i]>num[j])
				l[i] = max(l[i], 1 + l[j]);
		}
		long long max =0;
		for(int i =0;i<n;i++)
			if(max<l[i])
				max = l[i];
		cout<<max<<endl;
}
