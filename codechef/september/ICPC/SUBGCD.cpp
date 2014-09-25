#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int a, int b){   int temp;       while(b>0)        {                temp= b;                b=a%b;                a=temp;        }return a;}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    int lat,prev=1;
    bool flag = true;
    for(int  i =0;i<n;i++)
    {
    scanf("%d",&lat);
    if(gcd(lat,prev)==1)
    {
    prev =lat;
    continue;
    }
    else
    {
    cout<<-1<<endl;
    flag = false;
    break;
    }
    }
    if(flag)
    cout<<n<<endl;
    }
}
