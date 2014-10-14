#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m ;
		cin>>n>>m;
		vector< pair<long long,char> >myvector;
		for(int i =0;i<m;i++)
		{
			char tmp;
			long long loc;
			cin>>tmp>>loc;
			myvector.push_back(make_pair(loc,tmp));
		}
		sort(myvector.begin(),myvector.begin()+m);
		long long ans =1;
		char prevC = myvector[0].second;
		long long prevL = myvector[0].first;
		char currC;
		long long currL;
		for(int i =1;i<myvector.size();i++)
		{
			currL = myvector[i].first;
			currC = myvector[i].second;
			if(prevC!=currC)
			{

				long long tmp1 = currL - prevL;
				cout<<currL<<" "<<prevL;
				ans*= tmp1;
				ans%=1000000009;
				cout<<" "<<ans<<endl;
			}
				prevL = currL;
				prevC = currC;
		
		}
		cout<<ans<<endl;
	}

return 0;
}
