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
		scanf("%lld %lld",&n,&m);
//		printf("%lld\n",m);
		vector< pair<long long,char> >myvector;
		myvector.push_back(make_pair(0,'a'));
		char tmp;
		long long loc;
		for(int i =0;i<m;i++)
		{
			scanf("%c %lld",&tmp,&loc);
			myvector.push_back(make_pair(loc,tmp));
			cout<<"fhalhf "<<i<<endl;
		}
		sort(myvector.begin()+1,myvector.begin()+m+1);
		long long ans =1,last = myvector[1].first;
		for(int i =2;i<myvector.size();i++)
		{
		if(myvector[i].second!=myvector[i-1].second)
		{
			long long m = myvector[i].first - last;
			ans = (ans*m)%1000000009LL;
							
		}
		 last = myvector[i].first;
		cout<<"ehllo"<<endl;
		}
		cout<<"bye"<<endl;
		cout<<ans<<endl;
	}

return 0;
}
