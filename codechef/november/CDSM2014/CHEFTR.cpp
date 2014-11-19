#include<iostream>
using namespace std;
int main()
{
	long long t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		n = n-k;
		long long a = (n*(n-1)*(n-2))/6;
		long long b = (n*(n-1)*k)/2;
		long long c = (n*k*(k-1))/2;
		cout<<a+b+c<<endl;
	}
	return 0;
}
