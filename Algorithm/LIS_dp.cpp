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
int lis(int *arr,int n )
{
	int *lis,i,j,max =0;
	lis = (int*)malloc(sizeof(int)*n);
	for( i =0;i<n;i++)
		lis[i] = 1;
	for(i=0;i<n;i++)
	       for(j =0;j<i;j++)
	       {
			if(arr[i]>arr[j] && lis[i]<lis[j] +1)
		 		lis[i]  = lis[j] + 1;
	       }
		
	for(i =0;i<n;i++)
	{
	if(max<lis[i])
	max = lis[i];
	}
	return max;
}	
int main()
{
	int n,tmp;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++)
		cin>>arr[i];
	cout<<lis(arr,n)<<endl;
	        return 0;
}

