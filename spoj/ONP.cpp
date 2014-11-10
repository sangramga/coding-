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
		stack<char>store;
		string str;
		cin>>str;
		for(int i =0;i<str.size();i++)
		{
			if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='^'||str[i]=='+')
				store.push(str[i]);
			else if(str[i]=='(')
				continue;
			else if(str[i]==')')
			{
				cout<<store.top();
				store.pop();
			}
			else
				cout<<str[i];
		}
		cout<<endl;
	}
}
