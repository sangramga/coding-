#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long >fibs(1100005,0);
void calfib()
{
	fibs[1] = 0;
	fibs[2] = 1;
	for(int i =3;i<=1100004;i++)
		fibs[i] = (fibs[i-1]+fibs[i-2])%100000;
}

int main()
{
	calfib();
	int t;
	cin>>t;
	for(int j =1;j<=t;j++)
	{
		long long a,b;
		cin>>a>>b;
		vector<int >ans;
		for(int i =a;i<=(a+b);i++)
			ans.push_back(fibs[i]);
		sort(ans.begin(),ans.begin()+ans.size());
		cout<<"Case "<<j<<": ";
		int p = b +1;
		if(p>100)
			p= 100;
		for(int i =0;i<p;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
