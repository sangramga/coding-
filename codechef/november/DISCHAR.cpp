#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
	string str;
	cin>>str;
	int alpha[26] = { 0} ;
	for(int i = 0;i<str.size();i++)
	{
		if(alpha[str[i] - 'a'] ==0)
			alpha[str[i] - 'a'] = -1;
	}
	int ans =0;
	for(int i =0;i<26;i++)
	{
		if(alpha[i]== -1)
			ans++;

	}
	cout<<ans<<endl;
}
return 0;
}

