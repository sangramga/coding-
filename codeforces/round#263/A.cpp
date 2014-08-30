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
	long long t,tmp, sum =0;
	cin>>t;
	vector <long long> g;

	for(long long i =0;i<t;i++)
	{
		cin>>tmp;
		g.push_back(tmp);
	}
	sort(g.begin(), g.begin()+t);
	for(long long i =0;i<t;i++){
		sum+=g[i];
//		printf("%d ",g[i]);
	}
//	printf("\n");
	if(t==1)
	{
		cout<<sum<<endl;
		return 0;
	}
	else if(t==2)
	{
			sum+= (g[0] + g[1]);
	cout<<sum<<endl;
	return 0;
	}
	else
	{
		long long fctr = 1;
		long long i;
		for(i =0;i<g.size()-2;i++)
		{
//			cout<<"before :"<<sum<<" "<<fctr<<endl;
			sum+= (fctr*g[i]);
			fctr++;
//			                        cout<<"after :"<<sum<<" "<<fctr<<endl;

		}
//		printf("out\n");
//		fctr--;
//		i--;
//	cout<<sum<<" "<<fctr<<" "<<g[i]<<" "<<g[i+1]<<endl;
		sum+= (fctr * (g[i]+g[i+1]) );
		cout<<sum<<endl;
		return 0;
	}

	return 0;
}
