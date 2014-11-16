#include<iostream>
using namespace std;
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int lcs (int *num,int n )
{
	int tmax = num[0];
	int fmax = tmax;
	for(int i =1;i<n;i++)
	{
		tmax = max(num[i],tmax+num[i]);
		fmax = max(tmax,fmax);
	}
	return fmax;
}
int main()
{
	int n;
	cin>>n;
	int num[n];
	for(int i =0;i<n;i++)
		cin>>num[i];
	cout<<lcs(num,n)<<endl;
	return 0;
}
