#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int limit = sqrt(1000000)+2;
int  sqrtlimit = sqrt(limit)+1;
vector<bool>sieve(limit,false);
vector<int >primes;
inline void fastRead_int(int &x) {
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;

    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());

    if(c=='-') {
    	neg = 1;
    	c = getchar_unlocked();
    }

    for(; c>47 && c<58 ; c = getchar_unlocked()) {
    	x = (x<<1) + (x<<3) + c - 48;
    }

    if(neg)
    	x = -x;
}
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
int minPrime(int n)
{
	bool flag = true;
	int i =0;
	for(i=0;primes[i]*primes[i]<=n;i++)
	{
	    while(n>0 && primes[i]%n==0)
        {
            return primes[i];
        }
	}
	if(n!=1)
        return n;
}


int main()
{
	Sieve();
	int n;
	fastRead_int(n);
	while(n--)
	{
		int tmp;
		fastRead_int(tmp);
		int minP = minPrime(tmp);
		printf("%d\n",tmp-minP);
	}
	return 0;
}

