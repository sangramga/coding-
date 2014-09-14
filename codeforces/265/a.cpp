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
	string str;
	cin>>str;
	int carry =1;
	int count = 0;
	for(int i =0;i<n;i++)
	{
//		cout<<carry<<" "<<(int)str[i]-48 <<" "<<count<<endl;
		if(((int)str[i]-48)==1&& carry ==1)
			count++;
		if(((int)str[i]-48)==0 && carry == 1)
		{
			count++;
			carry = 0;
		}
	}
	cout<<count<<endl;
}

