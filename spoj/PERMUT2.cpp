#include<iostream>
using namespace std;
int main()
{
	long long n ;
	cin>>n;
	while(n!=0)
	{
		bool flag = true;
		long long num[n];
		for(int i =0;i<n;i++)
			cin>>num[i];
		for(int i =1;i<=n;i++)
		{
			if(num[num[i-1]-1]==i)
				continue;
			else
			{
				flag = false;
				break;
			}
		}
		if(flag)
			cout<<"ambiguous"<<endl;
		else
			cout<<"not ambiguous"<<endl;
		cin>>n;
	}

	return 0;
}
