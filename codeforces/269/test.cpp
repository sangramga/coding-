#include<iostream>
#include <utility>  
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector < pair<int,int> > myvector;
	int t;
	cin>>t;
	int arry[t];
for(int i =0;i<t;i++)
{
	cin>>arry[i];
	myvector.push_back(make_pair(arry[i],i));
}
sort(myvector.begin(),myvector.end());
for(int i =0;i<t;i++)
{
	cout<<myvector[i].first<<" "<<myvector[i].second<<endl;
}


	return 0;

	}
