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

int _lis(int *arr,int n,int *max_ref)
{
	if(n==1)
		return 1;
	int res, max_end= 1;
	for(int i =1;i<n;i++)
	{
		res = _lis(arr,i,max_ref);
		if(arr[i-1]<arr[n-1] && res+1 > max_end)
			max_end = res + 1;
	}
	if(*max_ref<max_end)
		*max_ref = max_end;
	return max_end;
}
//wrapper function for _lis
int lis(int *arr,int n)
{
	int max = 1;
	_lis(arr,n,&max);
	return max;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++)
		cin>>arr[i];
	cout<<lis(arr,n)<<endl;
	        return 0;
}

