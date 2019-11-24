#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int f(int a[],int n,int sum,int dp[][5000])
{
  if(sum==0)
  return 1;
  if(sum<=0 || n<=0)
  return 0;
  if(dp[n][sum]!=0)
  return dp[n][sum];
  else
  {
     dp[n][sum]=f(a,n-1,sum,dp)+f(a,n,sum-a[n-1],dp);
     return dp[n][sum];
  }
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	   int a[]={3,5,10};
	   int n=3;
	   int sum;
	   cin>>sum;
	   int dp[n+1][5000];
	   memset(dp,0,sizeof(dp));
	   cout<<f(a,n,sum,dp)<<endl;

	}

	return 0;
}
