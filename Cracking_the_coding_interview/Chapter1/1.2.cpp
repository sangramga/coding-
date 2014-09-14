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
	string str ;
	cin>>str;
	str+='\0';
	int i=0;
	while(str[i]!='\0')
		i++;
	for(int j=0;j<i;j++)
	{
		char p  = str[i];
		str[i] = str[j];
		str[j] = p;
		i--;
	}
	cout<<str<<endl;
	        return 0;
}
