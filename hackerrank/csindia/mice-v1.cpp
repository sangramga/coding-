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
	  int t;
	  cin>>t;
		  while(t--)
		  {
			  long long n;
			  cin>>n;
			  long long mice[n],hole[n];
			  for(long long i=0;i<n;i++)
				  cin>>mice[i];
			  for(long long i=0;i<n;i++)
				  cin>>hole[i];
			  sort(mice,mice+n);
			  sort(hole,hole+n);
			  long long max = abs(mice[0]-hole[0]);
			  for(long long i =1;i<n;i++)
			  {
				  if(abs(mice[i] - hole[i])>max)
					  max = abs(mice[i] - hole[i]);
			  }
			  cout<<max<<endl;
		  }
	  return 0;
}

