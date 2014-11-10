#include<iostream>
#include<cstdio>
#define PI 3.14159265359
using namespace std;

int main()
{
	float L;
	cin>>L;
	while(L!=0)
	{
		printf("%.2f\n",((L*L)/(PI*2.0)));
		cin>>L;
	}
	return 0;
}
