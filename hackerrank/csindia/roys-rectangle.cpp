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
long long min(long long x,long long y)
{
	if(x<y)return x;
	else return y;
}
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long x,x1,x2,y,y1,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		cout<<min(min(abs(x-x1),abs(x-x2)),min(abs(y-y1),abs(y-y2)))<<endl;
	}
	        return 0;
}

