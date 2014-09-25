#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<map>
#include<math.h>
#include<algorithm>
#define LL long long
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define SL(N) scanf("%d",&N);
#define pnl printf("\n");
#define pb push_back
#define mp make_pair
using namespace std;
int gcd(int a, int b){ int temp; while(b>0)	{ temp= b; b=a%b; a=temp;}	return a;}
LL dp[5002][5002];
 LL sum[5003];
   LL val[5003];
   LL ar[5003];
main()
{
       LL n,m,k,i,j;
        cin>>n>>m>>k;
        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
            sum[i]=sum[i-1]+ar[i];
          //  cout<<sum[i]<<" ";
        }
       // pnl pnl
        val[0]=0;
        for(i=1;i<=n-m+1;i++)
        {
             val[i]= sum[i+m-1]-sum[i-1];
            // cout<<val[i]<<" ";
        }
       // pnl pnl
        LL take,not_take;
        for(i=1;i<=n-m+1;i++)dp[i][1]=val[i];
        for(i=1;i<=n-m+1;i++)
        {
             for(j=1;j<=k;j++)
             {
                 //take
                  if(i-m>=1)take=dp[i-m][j-1]+val[i];
                  else take=val[i];
                  // not take
                  if(i-1>=1)not_take=dp[i-1][j];
                  else not_take=0;
                  dp[i][j]=max(take,not_take);
             }
            // cout<<dp[i][j]<<"\n";
        }
        cout<<dp[n-m+1][k]<<endl;
return 0;
}
