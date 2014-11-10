#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
long long sum(long long n)
{
	if(n<=3)
		return n;
	else
		return max(n, sum(n/2)+sum(n/3)+sum(n/4));
				}
int main()
{
	long long n;

	while(scanf("%lld",&n)==1)
		cout<<sum(n)<<endl;
	return 0;
}
