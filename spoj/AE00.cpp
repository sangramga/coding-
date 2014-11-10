#include<iostream>
using namespace std;
int main()
{
	long long n,ans =0;
	cin>>n;
	for(int i =1;i<=n;i++)
	{
		long long j = i;
		while(i*j<=n)
		{
			ans++;
			j++;
		}
	}
	cout<<ans<<endl;
return 0;
}
