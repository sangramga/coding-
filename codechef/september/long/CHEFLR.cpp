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
	while(n--)
	{
		string str;
		cin>>str;
		int l = str.size();
		long long ans = 1;
		for(int i =0;i<l;i++)
		{
			if(i%2==0)
			{
				if(str[i]=='l')
				{
//					cout<<1<<" "<<i<<str[i]<<endl;
					ans*=2;
				}
				else
				{
//					                                        cout<<2<<" "<<i<<str[i]<<endl;

					ans = ans*2 +2;
				}
			}
			else
			{
				if(str[i]=='l')
				{
//					                                        cout<<3<<" "<<i<<str[i]<<endl;

					ans = 2*ans - 1;
				}
				else
				{
//					                                        cout<<4<<" "<<i<<str[i]<<endl;

					ans = 2*ans + 1;
				}
			}
			ans%=1000000007;
//			cout<<ans<<endl;
		}
		cout<<ans<<endl;
	}
}
