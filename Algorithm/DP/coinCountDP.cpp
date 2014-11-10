#include<iostream>
using namespace std; 
int coinCountDP(int *num, int m, int n)
{
	int count[n+1];
	for(int  i =0;i<n+1;i++)
		count[i] = 0;
	count[0] = 1;
	for(int i =0;i<m;i++)
		for(int j = num[i];j<=n;j++)
			count[j]+= count[j-num[i]];
	return count[n];
}

main()
{
	int m;
	cin>>m;
	int num[m];
	for(int i =0;i<m;i++)
		cin>>num[i];
	int n ;
	cin>>n;
	cout<<coinCountDP(num,m,n)<<endl;
}
	
