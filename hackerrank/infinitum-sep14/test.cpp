#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int a, int b)
{ 
	int temp; 
	while(b>0)
	{ 
		temp= b;
	       	b=a%b;
	       	a=temp;
	}
	return a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	 int t = gcd(a,b);
	a = a/t;
	b = b/t;
	cout<<t<<" t"<<endl;
	cout<<a<<"/"<<b<<endl;
	return 0;
}
