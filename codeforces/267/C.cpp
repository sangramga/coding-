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
	int n,m,k;
	long long sum =0;
	cin>>n>>m>>k;
	m--;
	long long p[n];
	for(int i =0;i<n;i++)
		cin>>p[i];
	sort(p,p+n);
//	cout<<"m "<<m<<endl;
	int count = 0;
	for(int i = n-1;i>=0;i--)
	{
		for(int j = i;j>=0;j--)
		{
//			cout<<"I "<<i<<" j "<<j<<endl;
			if(p[i]-p[j] ==m)
			{
				count++;
//				cout<<"before "<<sum<<" "<<p[i]<<" "<<p[j]<<endl;
				if(i!=j)
				sum+= (p[i] + p[j]);
				else
					sum+=p[i];

				p[i] =-1;
				p[j] = -1;
//				cout<<"after "<<sum<<endl;
				break;
			}
		}
		if(count==k)
			break;
	}
	cout<<sum<<endl;


				return 0;
}

