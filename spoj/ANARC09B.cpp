#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long w,h;
	while(true)
	{
		cin>>w>>h;
		if(w==0&&h==0)
			return 0;
		else
		{

			long long area = w*h,ans =1,tmp;
			tmp =area;
			while(true)
			{
//				cout<<area<<" "<<ans<<endl;
				if(sqrt(area )== floor(sqrt(area)))
				{
					cout<<ans<<endl;
					break;
				}
				else{
					area += tmp;
					ans++;
				}
			}
		}

				
	}
	return 0;
}
