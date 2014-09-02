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
	long long int m,n;
	cin>>m>>n;
	long long arry[n-m+1];
	for(long long i=0;i<m-n+1;i++)
		arry[i] = 0;
	for(long long j =m;j<=n;j++)
	{
	for(long long i = 2;i<= sqrt(n);i++)
	{
		if(j%i==0)
		{
			arry[j-m]= -1;
			break;
		}


	}
	}
	for(long long i =0;i<(m-n);i++)
	{
		if(arry[i]!=(-1))
			cout<<m+i<<" ";
	}
	cout<<endl;
	
	return 0;
}
