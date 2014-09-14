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
void permutation(string str1,string str2)
{
	 int alpha[256] = { 0 };
	 for(int i =0;i<str1.size();i++)
	    alpha[str1[i] - 'a']++;
	 for(int i =0;i<str2.size();i++)
	   alpha[str2[i] - 'a']--;
	 for(int i =0;i<26;i++)
	 if(alpha[i]!=0)
	 {
		  cout<<"NO"<<endl;
		  return ;

	 }

	 cout<<"YES"<<endl;
}
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	permutation(str1,str2);
	
	        return 0;
}
