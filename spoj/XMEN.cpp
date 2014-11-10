#include<iostream>
using namespace std;
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int num1[n],num2[n];
		for(int i =0;i<n;i++)
			cin>>num1[i];
		for(int i =0;i<n;i++)
			cin>>num2[i];
		int prev[n+1],curr[n+1];
		for(int i =0;i<=n;i++)
			prev[i] = 0;
	for(int i =0;i<=n;i++)
	{
		curr[0] = 0;
		for(int j =1;j<=n;j++)
		{
			if(num1[i-1]==num2[j-1])
				curr[j] = 1 + prev[j-1];
			else
				curr[j]= max(prev[i],curr[j-1]);
		}
		for(int i =1;i<=n;i++)
			prev[i] = curr[i];
	}
	cout<<curr[n]<<endl;
	}
	return 0;
}
