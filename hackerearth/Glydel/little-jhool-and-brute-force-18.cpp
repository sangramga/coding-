#include<iostream>
using namespace std;
int main()
{
	int number[35] = {1729, 4104, 13832, 20683, 32832, 39312, 40033, 46683, 64232, 65728, 110656, 110808, 134379, 149389, 165464, 171288, 195841, 216027, 216125, 262656, 314496, 320264, 327763, 373464, 402597, 439101, 443889, 513000, 513856, 515375, 525824, 558441, 593047, 684019, 704977};
	int t;
	cin>>t;
	while(t--)
	{
		int tmp;
		cin>>tmp;
		int i =0;
		while(number[i+1]<=tmp)
			i++;
		if(i==0)
			cout<<-1<<endl;
		else
			cout<<number[i]<<endl;
	}
	return 0;
}
