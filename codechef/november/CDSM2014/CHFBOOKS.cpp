#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m;
		cin>>n>>m;
		long long p[n];
		for(int i =0;i<n;i++)
			cin>>p[i];
		sort(p,p+n);
		long long a=0,b=0,total=0;
		for(int i =0;i<n;i++)
		{
			if(i<m)
				a+=p[i];
			if((n-m)<=i)
				b+=p[i];
			total+=p[i];
		}
		cout<<max(abs(total - 2*a),abs(total-2*b))<<endl;
	}
	return 0;
}


