#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int minValue(int N, vector<int>s)
{
int itm = s.size(),min = 99999999,ans =0,sum =0;
for(int i =0;i<itm;i++)
{
	sum+=s[i];
	if(s[i]<min)
	min = s[i];
	}
	if(sum<itm)
	return 0;
	for(int j =1;j<=N&&min>0&&(sum-itm)>=(N-j);j++)
	{
	cout<<j<<" "<<sum<<" "<<ans<<" "<<min<<endl;
	sum-=itm;
	ans++;
	min--;
	}
return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,t;
		cin>>n>>m;
		vector<int>s;
		for(int i =0;i<m;i++)
		{
			cin>>t;
			s.push_back(t);
		}
		cout<<minValue(n,s)<<endl;
	}


	return 0;

}
