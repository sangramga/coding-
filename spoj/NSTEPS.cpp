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
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		if(x==y)
		{
			if(x%2==0)
				cout<<2*x<<endl;
			else
				cout<<2*x-1<<endl;
		}
		else if(x-y==2)
		{
			if(x%2==0)
				cout<<x+y<<endl;
			else
				cout<<x+y-1<<endl;
		}
		else
			cout<<"No Number"<<endl;
	}
}
