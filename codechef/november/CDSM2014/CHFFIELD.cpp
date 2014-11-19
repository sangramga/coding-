#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define lim 1100
bool isprime[lim+10] = { false };
vector<int>primes;
void Sieve()
{
	for(int i =4;i<lim;i+=2)
		isprime[i] = true;
	for(int i = 3;i*i<=lim;i+=2)
	{
		if(!isprime[i])
		{
			for(int j =i*i;j<lim;j+= (2*i))
				isprime[j] = true;
		}
	}
	for(int i =2;i<lim;i++)
		if(!isprime[i]){
//			cout<<i<<" "<<endl;
			primes.push_back(i);
		}
}
bool isPrime(long long n)
{
	long long i=0;
        if(n==1)return false;
	while(primes[i]*primes[i]<=n&&i<primes.size())
	{
		if(n%primes[i]==0)
			return false;
		i++;
	}
	return true;
}
int main()
{
	Sieve();
//	for(int i =0;i<100;i++)
//		cout<<primes[i]<<" ";
//	cout<<endl;
	long long t;
	cin>>t;
	while(t--)
	{
		long long l,b;
		cin>>l>>b;
		if(l<=3)
			l = 1;
		if(b<=3)
			b = 1;
		if(l*b==1)
		{
			cout<<1<<endl;
			continue;
		}
		if(isPrime(l))
			l--;
		if(isPrime(b))
			b--;
		cout<<l*b<<endl;
	}

	return 0;
}
