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
	int t,ans =0;
	cin>>t;
	while(t--)
	{

		int p,q;
		cin>>p>>q;
		if((q-p)>=2)
			ans++;
	}
	cout<<ans<<endl;
	        return 0;
}

