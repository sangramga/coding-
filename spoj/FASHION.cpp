#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long men[n],women[n];
		for(int i =0;i<n;i++)
			cin>>men[i];
		for(int i =0;i<n;i++)
			cin>>women[i];
		sort(men,men+n);
		sort(women, women+n);
		long long sum =0;
		for(int i =0;i<n;i++)
			sum+= men[i]*women[i];
		cout<<sum<<endl;
	}
	return 0;
}
