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
	int count =1;
	string str,str1;
	cin>>str;
	for(int i =1;i<str.size();i++)
	{	
		if(str[i]!=str[i-1]){
			str1+=str[i];
			str1+=count;
			count =1;
		}
		else 
			count++;
	}
	str1+=str[str.size()-1];
		str1+=count;
	if(str1.size()<str.size())
		cout<<str1<<endl;
	else
		cout<<str<<endl;
	
	        return 0;
}
