#include<iostream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	char ans,tmp;
	int f =0 ,t =0;
	 ans= str[0];
	t = 1;
	for(int i =1;i<str.size();i++)
	{
		tmp = str[i];
		if(str[i]==str[i-1])
		{
			t++;
			if(t>f)
			{
				f = t;
				ans = tmp;
			}
			else if(t==f&&tmp<ans)
			{
				f = t;
				ans = tmp;
			}
		}
		else
		{
			t=1;
		}
	}
	cout<<ans<<"\n"<<f<<endl;

	return 0;
}
