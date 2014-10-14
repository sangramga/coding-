#include<stdio.h>
using namespace std;
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		n= n-1;
		long long three = n/3;
		long long  five = n/5;
		long long fifteen = n/15;
		long long sum1 = (three*(three+1)*3)/2;
		long long sum2 = (five*(five+1)*5)/2;
		long long sum3 = (fifteen*(fifteen+1)*15)/2;
		sum1 = sum1+sum2-sum3;
		printf("%lld\n",sum1);
	}


}
