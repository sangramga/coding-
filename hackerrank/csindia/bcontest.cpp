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
	int n;
	cin>>n;
	long long tmp;
	int bits[n] ;
	for(int i =0;i<n;i++)
	{
		bits[i] =1;
		cin>>tmp;
		while(tmp>2)
		{
			if(tmp%2!=0)
				bits[i]++;
			tmp/=2;
//			cout<<tmp;
		}

	}
	int ans = bits[0]^bits[1];
//	for(int i =0;i<n;i++)
//		cout<<bits[i]<<" ";
//	cout<<endl;
	for(int i =2;i<n;i++)
		ans^=bits[i];
//	cout<<ans<<endl;
	if(ans>0)
		cout<<"Shaka :)"<<endl;
	else
		cout<<"The other player :("<<endl;
return 0;
}

