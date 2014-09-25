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
	int n,m,k,tmp;
	cin>>n>>m>>k;
	m++;
	int bin[m][20];
	for(int i =0;i<m;i++)
		for(int j =0;j<20;j++)
			bin[i][j] = 0;

	for(int i =0;i<m;i++)
	{
		cin>>tmp;
		int j =0;
		while(tmp>1)
		{
//			cout<<" tmp = "<<tmp<<endl;
			bin[i][j] = tmp%2;
			j++;
			tmp/=2;
		}
		bin[i][j] = 1;
	}
	int ans =0;
	for(int i =0;i<m-1;i++)
	{
		int count =0;
		for(int j = 0;j<20;j++)
		{
			if(bin[i][j]!=bin[m-1][j])
			count++;
		}
	//	cout<<"diff "<<count<<endl;
	if(count<=k)
	ans++;
	}
cout<<ans<<endl;


	        return 0;
}

