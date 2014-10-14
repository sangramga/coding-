#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int limit = sqrt(1000150)+2;
int  sqrtlimit = sqrt(limit)+1;
vector<bool>sieve(limit,false);
vector<int >primes;


void Sieve()
{
	for(int i =4;i<=limit;i+=2)
		sieve[i] = true;
	for(int i = 3;i<sqrtlimit;i+=2)
	{
		for(int j = i*i;j<=limit;j+=(2*i))
			sieve[j] = true;
	}

	for(int i =2;i<=limit;i++)
		if(!sieve[i])
			primes.push_back(i);
}
int minPrime(int num)
{
	int idx;
	 bool flag=false;
        for(int j=0;primes[j]*primes[j]<=num;j++)
        {
            while(num%primes[j]==0)
            {
                flag=true;
                idx=primes[j];
                num/=primes[j];
                break;
            }
            if(flag)break;
        }
        if(flag==false && num!=1)
        {
            idx=num;
        }
        return idx;
}


int main()
{
	Sieve();
	int n;
	cin>>n;
//	for(int i=0;i<10;i++)cout<<primes[i]<<" " ;cout<<endl;
	while(n--)
	{
		int tmp;
		scanf("%d",&tmp);
		int minP = minPrime(tmp);
		printf("%d\n",tmp-minP);
	}
	return 0;
}
