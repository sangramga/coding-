#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
	string str;
	cin>>str;
	int ans =0;
	for(int i =0,j= str.size()-1;i<j;)
	{
		if(str[i]==str[j])
		{
			i++;
			j--;
		}
		else if(str[i+1]==str[j])
		{
			i += 2;
			j--;
			ans++;
		}
		else if(str[i] == str[j-1])
		{
			i++;
			j-=2;
			ans++;
		}
		else
		{
			ans = 10;
		}
		if(ans>1)
			break;
	}
	if(ans>1)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}

return 0;
}

