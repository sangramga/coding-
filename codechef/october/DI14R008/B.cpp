#include<stdio.h>
#include<iostream>
#include<string.h>
#include<limits.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string str;
        int start=0,endI;
        int tmp;
        int maxLn=INT_MIN;
        cin>>str;
        endI=str.size()-1;
        tmp=endI;
        int i =0;
        for( i =0; i<str.size(); i++)
        {
            if(str[i]=='a')
                continue;
            else
                break;
        }
        if(i==str.size())
        {
            cout<<0<<","<<0<<endl;
            continue;
        }
        for( i =0; i<str.size(); i++)
        {
            if(str[i]=='b')
                continue;
            else
                break;
        }
        if(i==str.size())
        {
            cout<<0<<","<<0<<endl;
            continue;
        }
bool flag = true;
  for( i =0;i<str.size();i++)
        {
            if(str[i]=='a'&&flag)
            continue;
            else
            flag = false;

       if(str[i]=='a'&&!flag)
       {
        flag = true;
        break;
       }
       }
       if(!flag)
       {
                   cout<<0<<","<<0<<endl;
                        continue;
       }




        while(str[start]!='b'&&start<endI)
        {
            start++;
        }
        if(start>=endI)
        {
            cout<<0<<","<<0<<endl;
        }
        else
        {

            for(int i= endI; i>start; i--)
            {
                if(str[i]=='a')
                {
                    tmp=0;
                    int l=i;
                    while(str[i]=='a')
                    {
                        ++tmp;
                        --i;

                    }

                    if(maxLn<tmp)
                    {
                        endI=l;
                        maxLn=tmp;
                    }
                    ++i;
                }
            }
            cout<<start<<","<<endI<<endl;
        }
    }

    return 0;

}
