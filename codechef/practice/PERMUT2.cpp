#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long t;
	while(1){
		int flag = 0;
	cin>>t;
	if(t==0)
		return 0;
	int num[t+1];
	for(int i =1;i<=t;i++)
		cin>>num[i];
	for(int i =1;i<=t;i++)
	{
		if(num[num[i]] == i)
			continue;
		else
		{
			flag = 1;
		}
	}
	if(flag)
		cout<<"not ambiguous"<<endl;
	else
		cout<<"ambiguous"<<endl;
	}
	return 0;
}
