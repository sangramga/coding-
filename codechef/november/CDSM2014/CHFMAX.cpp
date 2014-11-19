#include<iostream>
#include<stdio.h>
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
		int alpha[26] = { 0 },max = 0;
		char mx;
		for(int i =0;i<str.size();i++)
			alpha[str[i] - 'a']++;
		for(int i =0;i<26;i++)
		{
//			cout<<alpha[i]<<" "<<max<<endl;;
			if(alpha[i]>max)
			{
				mx = 'a' + i;
				max = alpha[i];
			}
		}
		for(int i =0;i<str.size();i++)
		{
//			cout<<mx<<endl;
			if(str[i] == mx)
				str[i] = '?';
		}
		cout<<str<<endl;
	}
	return 0;
}
