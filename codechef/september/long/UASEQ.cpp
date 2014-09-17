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
int main()
{
	long long n,k,d,a;
	map<long, long long>m;

	cin>>n>>k;
	long long int A[n];
	 for(long long i=0;i<n;i++)
	        cin>>A[i];
	 if(n>50)
	{
		sort(A,A+n);
		d = A[n/2 +1] - A[n/2];
		a = A[n/2] - (n/2)*d;
		for(int i =0;i<n;i++)
		{
			cout<<a<<" ";
			a+=d;
		}
		cout<<endl;
		return 0;
	}
	 for(int i =1;i<n;i++)
	 {
		 d = A[i] - A[i-1];
		 m[d]++;
	 }
	long long currentA = A[0],currentD = A[1]-A[0];
	for(long long i =2;i<n;i++)
	{
		d = A[i] - A[i-1];
		a =  A[i] - i*d;
		if(a<currentA||(a==currentA&&d<currentD)&&m[d]<=k)
		{
			currentA = a;
			currentD = d;
		}
	}
	for(long long i =0;i<n;i++)
	{
		cout<<a<<" ";
		a+=d;
	}
	cout<<endl;
	        return 0;
}

