#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;
long long power(int k)
{
	long long ans = 1;
	if(k==0)
		return ans;
	else
	{
		for(int i =1;i<=k;i++)
		{
			ans*=6;
			ans%=1000000007;
		}
		return ans;
	}
}
 int main()
{
	long long n,i,tmp=1,ans=1,k;
	cin>>n;
	if(n<13)
	{
		cout<<0<<endl;
		return 0;
	}
	if(n==13||n==14)
	{
		cout<<1<<endl;
		return 0;
	}
	n-=12;
	if(n%2==0)
		k = (n-2)/2;
	else
		k = (n-1)/2;
	for(i = 1;i<=k;i++)
	{
		tmp*=6;
		tmp%=1000000007;
		ans+=tmp;
		ans%=1000000007;
	}
	cout<<ans<<endl;
	return 0;
}

