    #include<iostream>
    #include<stdio.h>
    using namespace std;
    int main()
    {
            int t;
            cin>>t;
            while(t--)
            {
            int n;
            cin>>n;
            char str[n][n];
            bool str1[n][n];
            for(int i =0;i<n;i++){
                for(int j =0;j<n;j++){
                       cin>>str[i][j];
                       }
                       }

    int ans = 0;
    if(str[n-1][n-1]=='.')
    str1[n-1][n-1] = true;
    else
    str1[n-1][n-1] = false;
    for(int i =n-2;i>=0;i++)
    {
        if(str1[n-1][i-1]==false||str[n-1][i]=='#')
        str[n-1][i] = false;
    }
    for(int i = n-2;i>=0;i--)
    {
    for(int j = n-1;j>=0;j--)
    {
        if()
    }
    }

    cout<<ans<<endl;

            }
    return 0;
    }
