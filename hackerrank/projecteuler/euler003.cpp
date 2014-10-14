#include<vector>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
long long limit = sqrt(1000000000000) +2;
long long sqrtlimit = sqrt(limit);
vector<bool> sieve(limit+1,false);
vector<long long>primes;
void Sieve()
{
	for(int i= 4;i<=limit;i = i+2)
		sieve[i] = true;
	for(int i =3;i<=sqrtlimit;i = i+2)
	{
		if(!sieve[i])
		{
			for(int j = i*i;j<=limit;j = j+ 2*i)
				sieve[j] = true;
		}
	}
	for(int i = 2;i<=limit;i++)
	{
		if(!sieve[i])
		{
			primes.push_back(i);
		}
	}
}
long long checkPrime(long long n)
{
	long long max =0;
	for(int i = 0;primes[i]<=n&&i<primes.size();i++)
	{
		if(n%primes[i]==0)
		{
			max = primes[i];
	}
	}
	if(max>0)
		return max;
	else
		return n;
}


int main()
{
	Sieve();
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout<<checkPrime(n)<<endl;
	}
	return 0;
}
