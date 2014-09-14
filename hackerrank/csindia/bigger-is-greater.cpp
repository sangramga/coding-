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
	long long t;
	cin>>t;
	while(t--)
	{
		string str;
		int k,l,n;
		cin>>str;
		n = str.size();
		char tmp;
		bool flag = true;
		for(int i = str.size()-2;i>=0;i--)
			if(str[i+1]>str[i])
			{
				k = i;
				flag = false;
				break;
			}
		if(flag){
			cout<<"no answer"<<endl;
			continue;
		}
//		cout<<"K "<<k<<endl;
		    for(int i = str.size()-1;i>=0;i--)
		    {
			    if(str[i]>str[k]){
				    l = i;
				    break;
			    }
		    }
//		    cout<<" L "<<l<<endl;
		    tmp = str[l];
		    str[l] = str[k];
		    str[k] = tmp;
//		    cout<<"Str after 1st replacement "<<str<<endl;
		    n--;
		    k++;
		    for(int i = k;i<n;i++,n--)
		    {
			   tmp = str[i];
			  str[i] = str[n];
			 str[n] = tmp;
 //                   cout<<"Str after  replacement "<<str<<endl;

		    }
		   cout<<str<<endl;
	} 
return 0;
}

