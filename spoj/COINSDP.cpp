#include<iostream>
#include<cstdio>
using namespace std;
long long num[1000000];
long long max(long long a, long long b)
{
	if(a>b)
		return a;
	else
		return b;
}
void Isum()
{
		num[0] =0;
	        num[1] =1;
		num[2] = 2;
		num[3] = 3;
		for(int i =4;i<1000000;i++)
		   num[i] = max(i,num[i/2] +num[i/3] + num[i/4]);
}
long long sum(long long n)
{
	if(n<1000000)
		return num[n];
	else
		return max(n,sum(n/2) +sum(n/3) + sum(n/4));	
}
int main()
{
	Isum();
	long long n;
	while(scanf("%lld",&n)==1)
	{
		if(n<1000000)
			cout<<num[n]<<endl;
		else
			cout<<sum(n)<<endl;
	}
	return 0;
}
