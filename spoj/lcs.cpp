#include<iostream>
#include<string>
using namespace std;
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int lis(int str1[],int str2[], int m, int n)
{
	int len[m+1][n+1];
	for(int i =0;i<=m;i++)
	{
		for(int j =0;j<=n;j++)
		{
			cout<<str1[i]<<" "<<str2[j]<<endl;
			if(i==0||j==0)
				len[i][j] = 0;
			else if(str1[i]==str2[j])
				len[i][j] = 1 + len[i-1][j-1];
			else
				len[i][j] = max(len[i-1][j],len[i][j-1]);
		}
	}
	return len[m][n];
}
main()
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
	cout<<lis(num1,num2,n,n)<<endl;
}
}
