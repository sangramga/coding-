#include<iostream>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n,tmp,sum=0;
		cin>>n;
		for(int i =0;i<n;i++)
		{
			cin>>tmp;
			sum +=tmp;
			sum %=n;
		}
		if(sum%n==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
