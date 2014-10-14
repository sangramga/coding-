#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
long long limit = sqrt(1000000000)+2;
long long sqrtlimit = sqrt(limit);
vector<bool>sieve(limit+1,false);
vector<long long> primes;
void Sieve()
{

	for(int i =4;i<=limit;i= i+2)
		sieve[i] = true;
	for(int i =3;i<=sqrtlimit;i= i+2)
	{
		if(!sieve[i]){
		for(int j = i*i;j<=limit;j = j + (2*i))
		{
			sieve[j] = true;
		}
		}
	}
	for(int i =2;i<=limit;i++)
	{
		if(!sieve[i]){
			primes.push_back(i);
	}}
}
int checkPrime(long long n)
{
	for(int i =0;i<primes.size()&&primes[i]*primes[i]<=n;i++)
	{
		if(n%primes[i]==0)
			return 0 ;
	}
	return 1;
}



int main()
{
	Sieve();
	int t;
	cin>>t;
	while(t--){
	long long m,n;
	cin>>m>>n;
	for(int i = m;i<=n;i++)
	{
		if(i==1)
		i++;
		if(checkPrime(i))
			cout<<i<<endl;
	}
	cout<<endl;}


	return 0;
}

