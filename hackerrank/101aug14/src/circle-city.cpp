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

	int t;
	cin>>t;
	while(t--)
	{
		long long r,k;
		cin>>r>>k;
		long long count =0;
		for(long long i =1;i<=r;i++)
		{
			if(ceil(sqrt(r*r - i*i)) ==sqrt(r*r - i*i))
				count++;
		}
		if(4*cout<=k)
			cout<<"possible"<<endl;
		else
			cout<<"impossible"<<endl;

	}

	return 0;
}

