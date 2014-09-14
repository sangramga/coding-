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
	string str  = (char*)malloc(sizeof(char)*100);
	cin>>str;
	int space=0,i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
			space++;
		i++;
	}
	int n = i + 2*space;
	str[n] = '\0';
	for(;i>=0;i--)
	{
		if(str[i]==' ')
		{
			str[n-1] = '0';
			str[n-2] = '2';
			str[n-3] = '%';
			n = n-3;
		}
		else
		{
			str[n-1] = str[i];
			n--;
		}
	}
	cout<<str<<endl;
	        return 0;
}
