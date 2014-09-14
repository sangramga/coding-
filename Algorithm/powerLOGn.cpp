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
long long  power(long long x,long long y)
{
	int temp;
	if(y == 0)
		return 1;
	temp = power(x,y/2);
	if(y%2==0)
		return temp*temp;
	else
		return x*temp*temp;
}
int main()
{
	long long n,m;
	cin>>n>>m;
	cout<<power(n,m)<<endl;
	        return 0;
}
