#include<iostream>
#include<string.h>
#include<stack>
#include<stdlib.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		while(getline(cin,str)){
		cout<<str<<endl;
		stack<char>mystack;
		long long a,b,t;
		for(int i =0;i<str.size();i++)
		{
			if(str[i]=='=')
				break;
			if((str[i]>='0'&&str[i]<='9')||str[i]=='+')
				mystack.push(str[i]);
		}
		a =0;
		long long tmp =1;
		while(mystack.top()!='+')
		{
			t = (int)mystack.top()-48;
			cout<<t<<endl;
			a += tmp*t;
			tmp *= 10;
			mystack.pop();
		}
		mystack.pop();
		b =0;
		tmp =1;
		while(!mystack.empty())
		{
			   t = (int)mystack.top()-48;
			   b += tmp*t;
			   tmp *= 10;
			   mystack.pop();
		}
		cout<<b<<" + "<<a<<" = "<<a+b<<endl;
	}}


	return 0;
}

