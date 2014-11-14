#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,sum;
	cin>>n>>sum;
	int num[n];
	for(int i =0;i<n;i++)
		cin>>num[i];
	sort(num, num+n);
	for(int i =0,j= n-1;i<j;)
	{
		int tmp = num[i]+num[j];
		if(tmp==sum)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		else if (tmp<sum)
		{
			i++;
		}
		else
			j--;
	}
	cout<<"NO"<<endl;
	return 0;
}
