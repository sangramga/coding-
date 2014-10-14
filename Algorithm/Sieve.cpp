#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void mark(bool arr[],int a, int n)
{
	int i =2;
	while(i*a<=n)
	{
		arr[i*a - 1] = 1;
		i++;
	}
}
void sieve(int n)
{
	long count =0;
	if(n>=2)
	{
		bool arr[n+2];
		memset(arr,0,sizeof(arr));
		for(int i = 1;i<n;i++)
		{
			if(arr[i]==0)
			{
			//	cout<<i+1<<" ";
				count++;
				mark(arr,i+1,n);
			}
		}
		for(int i =0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
		cout<<count<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	sieve(n);
	return 0;
}
