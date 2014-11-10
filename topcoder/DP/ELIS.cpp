#include<iostream>
using namespace std;
main()
{
	int n ;
	cin>>n;
	int num[n];
	for(int i =0;i<n;i++)
		cin>>num[i];
	int max = 1;
	int tmp =1;
	for(int i =0;i<n;i++)
	{
		tmp = 1;
		for(int j = i+1;j<n;j++)
			if(num[j]>num[i])
				tmp++;
	if(tmp>max)
		max = tmp;
	}
	cout<<max<<endl;
}
