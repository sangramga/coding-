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
	if(a<b) return b;
	else return a;
}
int lcs(string str1, string str2, int n ,int m)
{
	if(m==0||n==0)
		return 0;
	if(str1[n-1] ==str2[m-1])
		return 1 + lcs(str1,str2,n-1,m-1);
	else
		return max(lcs(str1,str2,n,m-1),lcs(str1,str2,n-1,m));
}
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	cout<<lcs(str1,str2,str1.size(),str2.size())<<endl;

	        return 0;
}
