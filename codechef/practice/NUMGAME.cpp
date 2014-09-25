#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,tmp,count = 0;
		cin>>n;
		if(n%2==0)
			cout<<"ALICE"<<endl;
		else
			cout<<"BOB"<<endl;
	}

	return 0;
}
