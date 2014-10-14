#include<iostream>
#include<stdio.h>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long  pos =0,neg =0,tmp,i =1,ans;
		while(n--)
		{
			cin>>tmp;
			if(tmp>=0)
				pos+=i*tmp;
			else
				neg+=i*tmp;
			i++;
		}
		ans = pos+neg;
		if(ans>0)
			cout<<ans<<endl;
		else
			cout<<-ans<<endl;

	}
		return 0;

}
