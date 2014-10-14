#include<iostream>
#include<algorithm>
using namespace std;
 int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		long long sum =0;
		int notes[n] ;
		for(int i =0;i<n;i++)
		{
			cin>>notes[i];
			sum+=notes[i];
		}
		int flag  =0;
		for(int i=0;i<n;i++)
		{
			if(notes[i]<=sum%x)
			{
				flag = 1;
				cout<<-1<<endl;
				break;
			}
		}
		if(flag==0)
			cout<<sum/x<<endl;
	}
	return 0;
}
