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
		bool flag = true;
		cin>>str;
		long long l = str.size();
		if(l==1)
		{
			int a = (int)str[0];
			if(a==57)
			{
				cout<<11<<endl;
				continue;
			}
			else
				str = a+1;
		}
		 if(l==2)
		{
			int a = (int)str[0];
			int b = (int)str[1];
			if(a==57&&b==57){
				cout<<101<<endl;
				continue;
			}
			else if(a>b)
			{
				str[1] = a;
			}
			else
			{
				if(b==9)
				{
					a++;
					str[0]= a;
				}
				else
				{
					a++;
					str[0] = a;
					str[1] = a;
				}
			}
		}
		if(l>2){
		long long n ;
		if(l%2==0)
			n = l/2 -1;
		else
			n = l/2;
			
		for(int i =0;i<n;i++)
		{
			if((int)str[i]<=(int)str[l-i-1])
				flag = false;
			str[l-1-i] = str[i];
		}

		if(!flag)
		{
		if(l%2==0){
                        int a  = (int)str[n];
                        a++;
                        str[n] = a;
                        str[n+1] = a;
                }
                else{
                        int a = str[n];
                        a++;
                        str[n] =a;
                }
		}

		}
		cout<<str<<endl;
	}
	return 0;
}
