#include<iostream>
using namespace std;
int coinRecurse(int *s , int m, int n)
{
	if(n==0)
		return 1;
	if(n<0)
		return 0;
	if(m<=0&&n>=1)
		return 0;
	return coinRecurse(s,m-1, n) + coinRecurse(s,m,n-s[m-1]);
}
main()
{
	int n,m;
	cin>>n>>m;
	int s[m];
	for(int i =0;i<m;i++)
		cin>>s[i];
	cout<<coinRecurse(s,m,n)<<endl;
}
