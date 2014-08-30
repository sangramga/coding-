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
	int n,m;
	scanf("%d %d",&n,&m);
	int count =0;
	while(n!=0)
	{
		n--;
		count++;
		if(count%m==0)
			n++;
	}
	printf("%d\n",count);
	
	return 0;
}
