#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
		while(t--)
		{
			int n;
			cin>>n;
			double num[n];
			for(int i =0;i<n;i++)
				cin>>num[i];
			sort(num,num+n);
			long  average = num[n-1];
			long tmp =average;
			for(int i =n-2;i>=0;i--)
			{
				tmp = tmp+num[i];
				if(tmp/(i+1) >=average)
					average = tmp/(i+1);
				else
					break;
			}
			cout<<average<<endl;
		}

	return 0;
}
