#include<vector>
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	vector<pair<int, int> >timing;
	int n;
	cin>>n;
	int start,end;
	for(int i = 1;i<=n;i++)
	{
		cin>>start>>end;
		timing.push_back(make_pair(end,start));
	}
	sort(timing.begin(),timing.end());
	int number = 1,last = 0;
	for(int i  =0;i<n;i++)
	{
		if(timing[i].second>=last)
		{
			last = timing[i].first;
			number++;
			cout<<number<<" activity is from "<<timing[i].second<<" to "<<timing[i].first<<endl;
	}
	}


	return 0;
}
