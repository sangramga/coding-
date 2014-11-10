#include<iostream>
using namespace std;
int main()
{

	long long n;
	cin>>n;
	while(n!=-1)
	{
	long long cap[n];
	long long sum = 0;
	for(int i =0;i<n;i++)
	{
		cin>>cap[i];
		sum +=cap[i];
	}
	if(sum%n!=0)
		cout<<-1<<endl;
	else
	{
		long long ans =0;
		long long a = sum/n;
		for(int i =0;i<n;i++)
			if(cap[i]<a)
				ans += (a - cap[i]);
		
		cout<<ans<<endl;
	}
cin>>n;
}
	return 0;
}



		

