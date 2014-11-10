#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
string ableToGet(int x, int y)
{
	long long sum  = 0;
	if(x+y==0)
		return "Possible";
	int k =0;
	sum += pow(3,k);
	while(sum<=x+y)
	{
		if(sum==(x+y))
			return "Possible";
		else
		{
			k++;
			sum+= pow(3,k);
		}
	}
	return "Impossible";
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long x,y;
		cin>>x>>y;
		cout<<ableToGet(x,y)<<endl;
	}
	return 0;
}
