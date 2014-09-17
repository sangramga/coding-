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
	int mat[m][n];
	bool row[m] ,col[n];
	for(int i =0;i<m;i++)
		row[i] = true;
	for(int i =0;i<n;i++)
		col[i] = true;
	for(int i =0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			cin>>mat[i][j];
			if(mat[i][j]==0)
			{
				row[i] = false;
				col[j] = false;
			}
		}
	for(int i =0;i<m;i++){
		for(int j =0;j<n;j++)
		{
			if(row[i]==false||col[j]==false)
				cout<<0<<" ";
			else
				cout<<mat[i][j]<<" ";
		}
	cout<<endl;
}
	return 0;
}

