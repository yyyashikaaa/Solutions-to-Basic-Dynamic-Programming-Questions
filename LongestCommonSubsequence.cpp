#include <bits/stdc++.h>

using namespace std;

int LCS(int dp[][100], string X, string Y, int m, int n)
{
    if(m==0||n==0)
        return 0;
    if(dp[m-1][n-1]!=-1)
        return dp[m-1][n-1];
    if(X[m-1]==Y[n-1])
    {
        dp[m-1][n-1]=1+LCS(dp,X,Y,m-1,n-1);
        return dp[m-1][n-1];
    }
    else
    {
        dp[m-1][n-1]=max(LCS(dp,X,Y,m,n-1),LCS(dp,X,Y,m-1,n));
        return dp[m-1][n-1];
    }
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
	    int m,n; cin>>m>>n;
	    string X,Y; cin>>X>>Y;
	    int dp[m][100];
	    memset(dp,-1,sizeof(dp));
	    cout<<LCS(dp,X,Y,m,n)<<endl;
	}
	return 0;
}
