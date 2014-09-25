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
int max(int a,int b)
{
//	cout<<a<<" "<<b<<endl;
	return (a>b) ? a:b;
}
int lcs(string str1, string str2,int m ,int n)
{
	int L[m+1][n+1];
	for(int i =0;i<=m;i++)
	{
		for(int j =0;j<=n;j++)
		{
			if(i==0||j==0)
				L[i][j] = 0;
			else if(str1[i-1]==str2[j-1])
				L[i][j] = L[i-1][j-1] +1;
			else
				L[i][j] = max(L[i-1][j],L[i][j-1]);
		}
	}
	 for(int i =0;i<=m;i++)
		         {
				                 for(int j =0;j<=n;j++)
							                 {
										 cout<<L[i][j]<<" ";
									 }
						 cout<<endl;
			 }
	return L[m][n];
}
int main()
{
	string str1, str2;
	cin>>str1>>str2;
	cout<<lcs(str1,str2,str1.size(),str2.size())<<endl;
	        return 0;
}
