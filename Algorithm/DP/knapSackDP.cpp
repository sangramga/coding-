#include<iostream>
using namespace std;
int M[2001][2001];
int val[2001];
int wt[2001];
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int knapSack(int n, int W)
{
	for(int i =0;i<=n;i++)
		for(int w = 0;w<=W;w++)
		{
			if(i==0||w==0)
				M[i][w] = 0;
			else if(wt[i]>W)
				M[i][w] = M[i-1][w];
			else
				M[i][w] = max(val[i-1] + M[i-1][w-wt[i-1]],M[i-1][w]);
		}
	return M[n][W];
}
int main()
{
	int W,n;
	cin>>W>>n;
	for(int i =0;i<n;i++)
		cin>>wt[i]>>val[i];
	cout<<knapSack(n,W)<<endl;
	return 0;
}
