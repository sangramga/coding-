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
int binarysearch(int target,int* elem, int l, int r)
{
	 int mid = (l+r)/2;
	if(r>=l)
	{
	if(elem[mid]==target)
		return mid;
	else if(elem[mid]<=target)
		return binarysearch(target,elem,mid+1,r);
	else
		return binarysearch(target,elem,l,mid-1);
	}
	return -1;
}


int main()
{
		int n ;
		cin>>n; // number of elements
	       int elem[n];
      		 for(int i =0;i<n;i++)
       		{
			cin>>elem[i];
       		}
		 int target ;
		 cin>>target;
		int idx = binarysearch(target,elem,0,n-1);
		if(idx!=-1)
			cout<<"Target found at index "<<idx<<endl;
		else
			cout<<"NOT FOUND"<<endl;
	
	       
	        return 0;
}

