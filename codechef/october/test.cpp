#include<iostream>
using namespace std;
long long reverse(long long n)
{
	        int tmp = 0;
		        while(n>0)
				        {
						                tmp*=10;
								                tmp+= (n%10);
										                n/=10;
												        }
			        return tmp;
}
int main()
{
	long long n;
	cin>>n;
	cout<<reverse(n)<<endl;
	return 0;
}
