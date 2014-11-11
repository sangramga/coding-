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
			alpha[str[i] - 'a'] = 1;
		else if(alpha[str[i] - 'a'] ==1)
		        alpha[str[i] - 'a'] = 0;

	}
	int ans =0;
	for(int i =0;i<26;i++)
	{
			ans += alpha[i];

	}
	if(ans==1||(ans==2 && alpha[str.size()/2-1]==1||(ans=0&&str.size()%2==0))||(ans==0 && (str[str.size()/2 -1]==str[str.size()/2])))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
return 0;
}

