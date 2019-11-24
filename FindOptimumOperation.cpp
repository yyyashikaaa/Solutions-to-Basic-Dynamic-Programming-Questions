#include <bits/stdc++.h>
using namespace std;
#define MAXVAL 10000000

int main()
{
    int t;
    cin>>t;
    vector <int> dp(10000,MAXVAL);
    dp[1] = 1;
    dp[0] = 0;
    for(int i=1;i<10000;i++)
    {
        int a = dp[i-1]+1;
        if(dp[i] > a)
        dp[i] = a;
        if(i<=5000)
            dp[2*i] = dp[i]+1;
    }
    while(t--)
    {
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
    return 0;
}
