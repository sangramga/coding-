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
	long long n;
	cin>>n;
	long long ans =0, tmp =0, last =0,curr = 0;
	while(n--)
	{
		cin>>curr;
		tmp+=(last - curr);
		last = curr;
		if(tmp<0)
		{
			ans+=(-tmp);
			tmp-=tmp;
		}
	}

	cout<<ans<<endl;
return 0;
}
