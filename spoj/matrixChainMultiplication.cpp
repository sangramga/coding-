#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int n;	
	cin>>n;
	long long num[n+1][n+1];
	int p[n+1];
 for(int i =0;i<=n;i++)
        {
                for(int j =0;j<=n;j++)
                        num[i][j] = 0;
     
        }

	for(int i =1;i<n;i++)
		cin>>p[i];
	for(int i =2;i<=n;i++)
	{
		for(int j =1;j<=n;j++)
		{
			if(i==j)
				num[i][j] = 0;
			else
			{
			int min = INT_MAX;
			for(int k = i;k<j;k++)
			{
			long long tmp = num[i][k] + num[k+1][j] + p[i-1]*p[k]*p[j];
			if(tmp<min)
				min  =tmp;
			}
			num[i][j] = min;
			}
		}
	}
	for(int i =0;i<=n;i++)
	{
		for(int j =0;j<=n;j++)
			cout<<num[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}

