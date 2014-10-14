#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,m,q;
	cin>>n>>m>>q;
	int vals[n][m];
	for(int i =0;i<n;i++)
		for(int j =0;j<m;j++)
			cin>>vals[i][j];
	while(q--)
	{
		int usr[n];
		for(int i =0;i<n;i++)
			cin>>usr[i];
		int ans = 0;
		bool flag = true;
		while(flag){
		for(int i =0;i<n;i++)
		{
			if(usr[i]>=vals[i][ans])
			{
				continue;
			}
			else{
				flag = false;
				break;
			}
		}
		if(flag)
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

