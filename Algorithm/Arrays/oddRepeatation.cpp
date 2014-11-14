#include<iostream>
using namespace std;
int main()
{
	int n,ans,tmp;
	cin>>n;
	cin>>ans;
	n--;
	while(n--)
	{
		cin>>tmp;
		ans =  ans^tmp;
	}
	cout<<ans<<endl;
	return 0;
}


