#include<iostream>
#include<math.h>
using namespace std;
long long fun(long long *num, long long n)
{
	long long sum =0;
	for(int i = 0;i<n;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			sum+=floor((num[i]+num[j])/(num[i]*num[j]));
		}
	}
	return sum;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long  num[n];
		for(int i =0;i<n;i++)
			cin>>num[i];
		cout<<fun(num,n)<<endl;
	}
}
