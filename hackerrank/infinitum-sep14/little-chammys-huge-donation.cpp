#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long t,sum,X,tmp;
    cin>>t;
    while(t--)
        {
        cin>>X;
        sum = 0;
        tmp  = 0;
//	cout<<"SUm "<<sum<<" tmp "<<tmp<<endl;
        while(sum<=X)
            {
            tmp++;
	    sum+=(tmp*tmp);
//	    cout<<"Sum "<<sum<<" tmp "<<tmp<<endl;
        }
	tmp--;
        cout<<tmp<<endl;
    }
    return 0;
}

