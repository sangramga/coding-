#include<iostream>
using namespace std;
int main()
{
	long long m,n;
	cin>>m>>n;
	int M[m][n];
	bool row[m];
	bool col[n];
	for(int i =0;i<m;i++)
		row[i] = true;
	for(int i =0;i<n;i++)
		col[i] = true;
	for(int i =0;i<m;i++)
	{
		for(int j =0;j<n;j++)
		{
			cin>>M[i][j];
			if(M[i][j] == 1)
			{
				row[i] = false;
				col[j] = false;
			}
		}
	}
//	bool flag = true;
	for(int i =0;i<m;i++)
	{
		for(int j =0;j<n;j++)
		{
			if(!row[i]||!col[j])
			{
				continue;
			}
			else
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"YES"<<endl;
	for(int i =0;i<m;i++)
		row[i] = true;
	for(int i =0;i<n;i++)
		col[i] = true;
	for(int i =0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			
			if(M[i][j]==0)
			{
				row[i] = false;
				col[j] = false;
			}
		}
	for(int i =0;i<m;i++){
		for(int j =0;j<n;j++)
		{
			if(row[i]==false||col[j]==false)
				cout<<0<<" ";
			else
				cout<<M[i][j]<<" ";
		}
	cout<<endl;
	}
	return 0;
}
