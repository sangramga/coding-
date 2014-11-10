#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long A,B,S,d,n,a;
		cin>>A>>B>>S;
		n = (2*S)/(A+B);
		d = (B-A)/(n-5);
		a = A - 2*d;
		cout<<n<<endl;
		for(int i =1;i<=n;i++)
		{
			cout<<a<<" ";
			a +=d;
		}
		cout<<endl;
	}
	return 0;
}
