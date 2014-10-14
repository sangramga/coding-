#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<limits.h>

using namespace std;
int main()
{
    long long n,m,i,j,k;
    string str1,str2;
    cin>>n>>m;
   map<string ,int >mymap;
    for(i =0;i<n;i++)
    {
        cin>>k;
        while(k--)
        {
        cin>>str1>>str2;
        str1+=str2;
        mymap[str1]++;
        }

    }
    for(i =0;i<m;i++)
    {
        cin>>k;
        int min = INT_MAX;
        while(k--)
        {
        cin>>str1>>str2;
        str1+=str2;
        if( mymap[str1]<=min)
            min =  mymap[str1];
        }
        cout<<min<<endl;
        }


	return 0;
}
