#include<iostream>
#include<stdio.h>
#include<map>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std; 
string cmin(string str1, string str2)
{
	if(str1<str2)
		return str1;
	else
		return str2;
}
string cmax(string str1, string str2)
{
	if(str1>str2)
		return str1;
	else
		return str2;
}
int main()
{
	vector<pair<string, string> > handles;
	string str1,str2;
	int n;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		cin>>str1>>str2;
		handles.push_back(make_pair(str1,str2));
	}
	int tmp;
	   bool flag = false;
	   string prev, curr,max;
	for(int i =0;i<n;i++)
	{
		cin>>tmp;
	if(i==0)
		{
			prev = cmin(handles[tmp-1].first,handles[tmp-1].second);
		}
		else
		{
			curr = cmin(handles[tmp-1].first,handles[tmp-1].second);
			if(curr<prev)
			{
				curr = cmax(handles[tmp-1].first,handles[tmp-1].second);
				if(curr<prev){
				flag = true;
				break;
				}
				if(curr>prev)
					prev = curr;
			}
			else
			{
				prev = curr;
			}		}
	}
	if(flag==false)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
