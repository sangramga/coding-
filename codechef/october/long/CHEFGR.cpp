#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int col[n];
		for(int i =0;i<n;i++)
			cin>>col[i];
		sort(col,col+n);
		int sum =0,max = col[n-1];
		for(int i =0;i<n-1;i++)
		{
			sum+=(max - col[i]);
		}
		m-=sum;
		if(m%n==0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}


