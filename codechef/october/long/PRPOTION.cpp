#include<iostream>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int max(long long a,long long b, long long c)
{
	if(a>b)
		if(a>c)
			return 0;
		else
			return 2;
	else
		if(b>c)
			return 1;
		else
			return 2;
}
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long potions[3][100] = {0};
		long long r,g,b,m;
		long long maxR=0,maxG = 0,maxB = 0;
		cin>>r>>g>>b>>m;
		for(int i =0;i<r;i++)
		{
			cin>>potions[0][i];
			if(potions[0][i]>maxR)
				maxR = potions[0][i];
		}
		 for(int i =0;i<g;i++)
		 {
		        cin>>potions[1][i];
			if(potions[1][i]>maxG)
			         maxG = potions[1][i];

		 }
		 for(int i =0;i<b;i++)
		 {
			 cin>>potions[2][i];
			 if(potions[2][i]>maxB)
			      maxB = potions[2][i];
			 		 }
		 while(m--)
		 {
			 int k  = max(maxR,maxG,maxB);
			 if(k==0)
			 {
				 maxR = 0;			 
				 for(int i =0;i<r;i++){
					 potions[k][i]/=2;
					 if(potions[k][i]>maxR)
					         maxR = potions[k][i];

				 }
			}
			if(k==1)
			 {
				 maxG = 0;			 
				 for(int i =0;i<g;i++){
					 potions[k][i]/=2;
					 if(potions[k][i]>maxG)
				  		 maxG = potions[k][i];

				 }
			}
			if(k==2)
			 {
				 maxB = 0;		 
				 for(int i =0;i<b;i++){
					 potions[k][i]/=2;
					 if(potions[k][i]>maxB)
						  maxB = potions[k][i];

				 }
			}
	}
		 if(maxR>maxG)
			 if(maxR>maxB)
				 cout<<maxR<<endl;
			 else
				 cout<<maxB<<endl;
		 else
			 if(maxG>maxB)
				 cout<<maxG<<endl;
			 else
				 cout<<maxB<<endl;
	}

	return 0;
}
