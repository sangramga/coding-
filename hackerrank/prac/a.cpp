#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int x,p,n,ans =0;
	cin>>x>>p>>n;
	while(p--)
	{
		cout<<"special divisor of  "<<x<<" ";
		for(int i =2;i<x;i++)
		{
			long long tmp = pow(i,n);
				if(x%i==0&&x%tmp!=0)
				{
					cout<<i<<" ";
					ans++;
				}
		}
		x++;
		cout<<endl;
	}
	cout<<"ans "<<ans<<endl;
	return 0;

}

