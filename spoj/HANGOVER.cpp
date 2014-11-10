#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	float n;
	cin>>n;
	while(n!=0.00)
	{
		float sum = 0.00;
		float i =2.0;
		while(sum<n)
		{
			sum+= (1.0/i);
			i++;
		}
		cout<<i-2<<" card(s)"<<endl;
		cin>>n;
	}

	return 0;
}
