#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	long long n;
	scanf("%lld",&n);
	long long arr[n+2];
	long long tmp =0,min =1000000001,max =0,mincount =0,maxcount =0;
	for(int i =0;i<n;i++)
	{
		scanf("%lld ",&arr[i]);
		tmp = arr[i];
		if(tmp<min)
		{
			min = tmp;
			mincount = 0;
		}
		if(tmp>max)
		{
			max = tmp;
			maxcount = 0;
		}
		if(tmp==min)
			mincount++;
		if(tmp==max)
			maxcount++;
	}
	       printf("%lld %lld %lld %lld\n",min,mincount,max,maxcount);

		return 0;
}

