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
void exchange(int* elem,int i,int j)
{
//	cout<<elem[i]<<" "<<elem[j]<<endl;
	int tmp;
	tmp = elem[i];
	elem[i] = elem[j];
	elem[j] = tmp;
//	 cout<<elem[i]<<" "<<elem[j]<<endl;
	return ;
}
void selectionSort(int* elem,int n)
{
	int min  = -1,idx;
	for(int i =0;i<n;i++)
	{
		idx = i;
		min = elem[i];
		for(int j = i;j<n;j++)
		{
//			cout<<elem[j]<<endl;
			if(elem[j]<=min)
				idx = j;
		}
//		cout<<"min elem "<<elem[idx]<<endl;
		exchange(elem,i,idx);
	}
return ;
}


int main()
{
	int n ;
	cin>>n;
	int elem[n];
	for(int i =0;i<n;i++)
		cin>>elem[i];
	selectionSort(elem,n);
	for(int i =0;i<n;i++)
		cout<<elem[i]<<" ";
	cout<<endl;
	return 0;
}

