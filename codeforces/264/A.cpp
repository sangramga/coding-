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
int max(int a,int b)
{
	if(a>b)
		return a;
	else return b;
}
int main()
{
	int n,s;
	cin>>n>>s;
	s*=100;
	int ans = -1;
	while(n--)
	{
		int x,y;
		cin>>x>>y;
		 if(x*100+y<=s)	  
		ans= max(ans,(s-(x*100+y))%100);

	}
	cout<<ans<<endl;
	return 0;
}

