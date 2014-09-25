#include<iostream>
#include<algorithm>
using namespace std;
 int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int wt[n],lim[n];
		for(int i =0;i<n;i++)
			cin>>wt[i];
		for(int i =0;i<n;i++)
			cin>>lim[i];
		sort(wt,wt+n);
		sort(lim,lim+n);
		int ans =0;
		int i =0,j=0;
		while(j<n)
		{
			if(wt[i]<=lim[j])
			{
//				cout<<wt[i]<<" "<<lim[j]<<endl;
				ans++;
				i++;
				j++;
			}
			else if(wt[i]>=lim[j])
				j++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

