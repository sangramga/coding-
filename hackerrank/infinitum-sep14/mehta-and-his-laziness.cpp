#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int gcd(int a, int b)
{
        int temp;
        while(b>0)
        {
                temp= b;
                b=a%b;
                a=temp;
        }
        return a;
}

 int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, count =0,tmp,total=0;
		cin>>n;
		for(int i =1;i<n;i++)
		{
			if(n%i==0)
			{
				total++;
				if(i%2==0&&sqrt(i)==floor(sqrt(i)))
			{
				count++;
			}
			}	}
		tmp = gcd(count,total);
//		cout<<"gcd  "<<tmp<<endl;
		count= count/tmp;
		total = total/tmp;
		if(count==0)
			cout<<0<<endl;
		else
			cout<<count<<"/"<<total<<endl;
	}


	return 0;
}
