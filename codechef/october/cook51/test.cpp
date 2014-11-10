#include <iostream>
#include<vector>
#include<set>

using namespace std;
int main ()
{	
	vector<long long >sample;
	multiset<long long>myset;
	multiset<long long>::iterator it;
	int n;
	cin>>n;
	int num[n];
	for(int i =0;i<n;i++)
		cin>>num[i];
	for(int i =0;i<n;i++)
	{
		int k = size();
		sample.push_back(num[i]);
		for(int j =0;j<k;j++)
			sample.push_back(sample[j] + num[i]);
	}
	for(int i =0;i<sample.size();i++)
		cout<<sample[i]<<" ";
	cout<<endl;
}

