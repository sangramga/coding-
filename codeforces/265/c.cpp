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
	int n , p;
	cin>>n>>p;
	int aplha[26]  = { 0 };
	string str;
	cin>>str;
	for(int i =0;i<n;i++)
	{
		if(((int)str[i]-'a')>=p)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	int i = n-1;
	while(i>=0)
	{

		if((int)str[i] - 'a'+ 1 == p&&i>0)
		{
			str[i] = 'a';
			i--;
			continue;
		}
		else
		{
			str[i]++;
			break;
		}
	}
	cout<<str<<endl;
	return 0;
}
