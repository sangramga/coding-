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
	long long t;
	cin>>t;
	while(t--)
	{
		string b,w;
		int alpha[26] = { 0 };
		cin>>b;
		for(int i=0;i<b.size();i++)
			alpha[b[i] - 'a'] = 1;
		cin>>w;
		int ans =0;
		for(int i =0;i<w.size();i++)
		{
			if(alpha[w[i]-'a']==1)
			{
				ans++;
				alpha[w[i]-'a']=0;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

