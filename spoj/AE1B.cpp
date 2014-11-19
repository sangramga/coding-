#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,s,ans =0,tmp =0;
	cin>>n>>k>>s;
	k = k*s;
	int screws[n];
	for(int i =0;i<n;i++)
		cin>>screws[i];
	sort(screws,screws + n);
	s =n-1;
	while(tmp<k&&s>=0)
	{
//		cout<<"BEfore "<<tmp<<" "<<ans<<endl;
		tmp += screws[s];
		s--;
		ans++;
//		cout<<"BEfore "<<tmp<<" "<<ans<<endl;

	}
	cout<<ans<<endl;
	return 0;
}
