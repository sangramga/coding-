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
                int n,ans =0;
            cin>>n;
            long long num[n];
            long long sum=0,tmp;
            for(int i =0;i<n;i++)
                {
                cin>>num[i];
                sum+=num[i];
            }
            float total = n;
            float avg = sum/total;
//	    cout<<"avg "<<avg<<endl;
            for(int i =0;i<n;i++)
                {
                if(num[i]>avg)
                    ans++;
            }
            cout<<ans<<endl;
        }
                return 0;
}


