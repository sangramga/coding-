#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		multiset<long long>sumSet;
		int s = 1<<n;
		long long tmp;
		int num[s];
		for(int i = 0;i<s;i++)
			cin>>num[i];
		sort(num, num+s);
		for(int i = 1;i<s;i++)
			sumSet.insert(num[i]);
		free(num);
		multiset<long long >valSet;
		mutliset<long long>::iterator it;
		vector<long long > tmpSet;
		for(int i =1;i<n;i++)
		{
			it = multiset.begin();
			valSet.insert(it);
			for(int i =0;i<

			

		
