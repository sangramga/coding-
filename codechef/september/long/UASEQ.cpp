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
	long long n,k,d;
	map<long long, long long>m;
	vector<long long>D;

	cin>>n>>k;
	long long int A[n];
	cin>>A[0];
	for(long long i =1;i<n;i++)
	{
		cin>>A[i];
		d = A[i]-A[i-1];
		if(m[d]<1)
		{
			m[d]=1;
			D.push_back(d);
		}
		else
			m[d]++;
}
long long l = D.size();
sort(D.begin(),D.begin()+l);
for(l= l-1;l>=0;l--)
{
	cout<<"D  = "<<" "<<D[l]<<" Occurrence "<<m[D[l]]<<endl;
	if((n - m[D[l]])<=k)
	{
		d = D[l];
		cout<<A[0]<<" ";
		for(int i =1;i<n;i++)
		{
			if(A[i] - A[i-1]!=d)
			{
				A[i] = A[i-1] + d;
			}
			cout<<A[i]<<" ";
		}
		cout<<endl;
		return 0;
	
			
		}
	cout<<endl;
	return 0;
	
}
	        return 0;
}

