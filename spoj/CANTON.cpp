#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long sum =0,i;
		for(i =1;;i++)
		{
			sum+=i;
			if(sum>=n)
				break;
		}
		long long d = sum-n;
		if(i%2==0)
			cout<<"TERM "<<n<<" IS "<<i-d<<"/"<<d+1<<endl;
		else
			 cout<<"TERM "<<n<<" IS "<<d+1<<"/"<<i-d<<endl;
	}
	return 0;
}
