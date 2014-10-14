#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int d = a-b;
	int tmp = d,t =1;
	while(d>0)
	{

		if(d%10!=9)
		{
			tmp+=t;
			break;
		}
		else
		{
			t*=10;
			d/=10;
		}
	}
	cout<<tmp<<endl;

	return 0;
}

