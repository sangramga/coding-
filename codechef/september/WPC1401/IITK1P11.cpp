#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int tmp;
		cin>>tmp;
		if(tmp==1){
			cout<<"NO"<<endl;
			continue;
		}
		int tens = 10;
		while(tens<tmp)
			tens*=10;
		if(tmp/tens==1)
		{
			cout<<"NO"<<endl;
			continue;
		}
			cout<<"YES"<<endl;
	}
	return 0;
}
