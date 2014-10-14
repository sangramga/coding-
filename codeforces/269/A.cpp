#include<iostream>
#include<algorithm>
using  namespace std;
 int main()
{
	int sticks [6];
	for(int i =0;i<6;i++)
	{
		cin>>sticks[i];
	}

	sort(sticks,sticks+6);
	int count =1,changes =0,max = 1;
	for(int i =1;i<6;i++)
	{
		if(sticks[i-1]!=sticks[i])
		{
			changes++;
			count =1;
		}
		else
		{
			count++;
			if(count>max)
				max = count;
		}
	}
	if(changes<=1&&max>=4)
		cout<<"Elephant\n";
	else if(changes ==2&&max>=4)
		cout<<"Bear\n";
	else
	    cout<<"Alien\n";
	     return 0;

}
