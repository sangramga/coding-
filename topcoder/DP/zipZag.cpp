#include<iostream>
using namespace std;
int main()
{
	int n ;
	cin>>n;
	int num[n],l[n];
	for(int i =0;i<n;i++)
	{
		cin>>num[i];
		l[i] = 1;
	}
	l[1]++;
	for(int i =2;i<n;i++)
	{
		int j = i-2;
		while(j>=0)
		{
			if(((num[i] - num[i-1])*(num[j+1]-num[j])<0)&&l[i]<1+l[j+1])
				l[i] = 1 + l[j+1];
			j--;
		}
	}
	int max = 0;
	for(int i =0;i<n;i++)
	{
		if(l[i]>max)
			max = l[i];
	}
	cout<<max<<endl;
}
	
