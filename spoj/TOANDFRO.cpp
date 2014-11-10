#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<math.h>
#include<algorithm>
#include<stack>
using namespace std;
 main()
{
	int n;
	string str;
	cin>>n;
	while(n!=0)
	{
		cin>>str;
		int row = str.size()/n;
			for(int i = 1;i<=n;i++)
			{
				for(int j = 0;j<row;j++)
				{
					if(j%2==0)
					{
						cout<<str[j*n+i-1];
					}
					else
					{
						cout<<str[(j+1)*n - i];
				}
			}
			}
		cout<<endl;
		cin>>n;
	}
}
