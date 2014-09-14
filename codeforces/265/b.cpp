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
 int n;
        cin>>n;
        int opration =0,gap =0;
        int letter[n];
	int fst = 0;
        for(int i =0;i<n;i++)
        {
                cin>>letter[i];
                if(letter[i]==1)
                {
                        opration++;
			if(fst==0)
			{
				gap = 0;
				fst = -1;
			}
                        if(gap>=1)
                        {
                                opration++;
                                gap =0;
                        }
                }
                else gap++;
		                        
		
//		cout<<gap<<"   "<<opration<<endl;


        }

        cout<<opration<<endl;
}
