#include<iostream>
using namespace std;
int main()
{
  long long n,ans=0;
	{
		cin>>n;
	if(n%2==0)
	{
		ans += (n/2)*(2+n)/2;
		cout<<ans<<endl;
		ans -= ((n/2)*(n))/2;
	}
	else
	{
		ans += (n/2)*(n+1)/2;
		cout<<ans<<endl;
		ans -= ((n/2) +1)*(1+n)/2;
	}
	cout<<ans<<endl;
	}
	return 0;
}
