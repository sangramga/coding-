#include<iostream>
using namespace std;
long long fib[100] = { 0 } ; 
long long fibn(long long  n)
{
	for(int i =1;i<=n;i++)
	{
		if(fib[i]==0)
		{
			if(i<=1)
				fib[i]= 1;
			else
				fib[i] = fib[i-1] + fib[i-2];
		}
	}
	return fib[n];
}
main()
{
	long long n;
	cin>>n;
	for(int i =1;i<=n;i++)
	cout<<fibn(i)<<endl;
}
