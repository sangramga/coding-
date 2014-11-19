#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,ans =0;
	cin>>n;
	string str;
	cin>>str;
	for(int i =0,j= str.length()-1;i<j;)
	{
		if(str[i]==str[j])
		{
			i++;
			j--;
		}
		else
		{
			i++;
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
