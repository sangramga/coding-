#include<iostream>
#include<string.h>
using namespace std;
int num(char a,char b)
{
	int i = (int)a - '0';
	int j = (int)b - '0';
	return 10*j+i;
}
int main()
{
	while(true)
	{
		 string str;
		 cin>>str;
		int l = str.size();
		if(str[0]=='0')
			break;			
		int dp[l+1];
		dp[0] = 1;
		dp[1] = 1;
		for(int i =2;i<=l;i++)
		{
			dp[i] = 0;
			char a = str[i-2] - '0',b = str[i-1] - '0';
			if(a==1||(a==2&&b<=6)) dp[i] +=dp[i-2];
			if(b!=0) dp[i] +=dp[i-1];
		}


	cout<<dp[l]<<endl;	
	}
	return 0;
}
