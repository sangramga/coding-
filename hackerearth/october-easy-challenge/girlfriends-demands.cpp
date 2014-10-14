#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	long long q,a,b;
	cin>>q;
	while(q--)
		{
			cin>>a>>b;
			if(a>=str.size())
			a = a%str.size();
			if(b>str.size())
			b  =b%str.size();
			if(str[a-1]==str[b-1])
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	return 0;
}
