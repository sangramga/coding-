#include<iostream>
using namespace std;
int wt[10000];
int val[10000];
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int knapSackRecursion(int W,int wt[],int val[],int n)
{
	if(n==0||W==0)
		return 0;
	if(wt[n-1]>W)
		return knapSackRecursion(W,wt,val,n-1);
	else
		return max(val[n-1] + knapSackRecursion(W-wt[n-1],wt,val,n-1), 
				knapSackRecursion(W,wt,val,n-1));
}
int main()
{
	int t,W;
	cin>>W;
	cin>>t;
	for(int i =0;i<t;i++)
		cin>>val[i]>>wt[i];
	cout<<knapSackRecursion(W,wt,val,t)<<endl;
	return 0;
}
