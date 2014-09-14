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
	int n,m,elem;
	cin>>n>>m;
	int arry[n];

	for(int i =0;i<n;i++)
		cin>>arry[i];
	char p;
	int k,total =0;

	while(m--)
	{
		cin>>p>>k;
		if(p=='C')
			total+=k;
		if(p=='A')
			total-=k;
		if(p=='R')
		{
			int tmp = total;
			tmp = (tmp + k)%n;
//			cout<<"TOTAL :"<<tmp<<endl;
			if(tmp==0)
				cout<<arry[n-1]<<endl;
			else if(tmp>0)
				cout<<arry[tmp-1]<<endl;
			else
			{
				tmp+=n;
				cout<<arry[tmp-1]<<endl;
			}


	}
	}

	return 0;
}

