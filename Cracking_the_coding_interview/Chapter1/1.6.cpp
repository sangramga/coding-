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
	int m,n;
	cin>>m>>n;
	int img[m][n];
	for(int i = 0;i<n;i++)
		for(int j =m-1;j>=0;j--)
			cin>>img[j][i];

	for(int i =0;i<m;i++){
		for(int j =0;j<n;j++)
		{
			cout<<img[i][j]<<" ";
		}
	cout<<endl;
	}
	return 0;
}

