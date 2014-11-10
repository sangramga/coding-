#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		long long  ans =1;
		while(b>0)
		{
			if(b%2!=0)
			{
				ans *= a;
				b--;
			}
			b/=2;
			a*=a;
			a = a%10;
			ans = ans%10;
		}
		cout<<ans<<endl;
	}
	return 0;
}
