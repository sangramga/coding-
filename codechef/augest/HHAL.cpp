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
		int l = str.length();
		int flag =0;
		for(int i =0;i<(l/2);i++)
		{
			if(str[i]!=str[l-1-i])
			{
				cout<<2<<endl;
				flag =1;
				break;
			}
			
		}
		if(flag==0)
			cout<<1<<endl;
	}

	
	return 0;
}

