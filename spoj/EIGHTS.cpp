#include<iostream>
#include<stdint.h>
using namespace std;
int main()
{
	unsigned long long int t, n ,ans;
	cin>>t;
	while(t--)
	{
		ans = 192;
		cin>>n;
		cout<<192+(n-1)*250<<endl;
	}
	return 0;
}
