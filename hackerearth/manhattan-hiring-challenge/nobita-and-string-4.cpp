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
	long long n;
	cin>>n;
	while(n--)
	{
		long long end;
		cout<<"Enter ";
		string input,output;
		getline(cin, input,'\n');
		end = input.length()-1;
		for(long long i = input.length()-1;i>=0;i--)
		{
			cout<<input[i]<<endl;
			if(input[i]==' ')
			{
				output+=input.substr(i,end);
				end = i-1;
				cout<<output<<endl;
			}
		}
	
	}



	return 0;
}

