#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long x,k,sum=0,tmp= 1,i=0;
		cin>>x>>k;
		while(true)
		{
			sum += tmp;
			if(sum<k)
			{
				tmp *= 2;
				i++;
			}
			else
				break;
		}
		long long diff = sum - k;
//		cout<<"i "<<i<<" diff "<<diff<<endl;
		long long d,n;
		d = tmp*2;
		n = tmp*2 - 2*diff - 1;
//		cout<<"n "<<n<<" d "<<d<<endl;
		float ans = (((float)n)*((float)x)/((float)d));
		printf("%.7f\n",ans);
	}

	return 0;
}

		
