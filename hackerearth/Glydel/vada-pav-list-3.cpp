#include<iostream>
#include<string>
#include<stdio.h>
#include<map>
using namespace std;
int main()
{
	map<string ,int>myMap;
	int n;
	string name;
	cin>>n;
	while(n--)
	{
		cin>>name;
		if(myMap[name]!=1)
			myMap[name] = 1;
		else
			continue;
	}
	
