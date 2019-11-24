#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sl(x) scanf("%lld",&x)
#define p printf
int lcps(string s1,string s2){
    int n=s1.size();
    int lcs[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
        if(i==0||j==0)lcs[i][j]=0;
        else if(s1[i-1]==s2[j-1])lcs[i][j]=1+lcs[i-1][j-1];
        else lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);

        }
    }
    return lcs[n][n];
}
int main()
 {
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;string s1;
        cin>>n>>s1;
        string s2=s1;
        reverse(s2.begin(),s2.end());
        cout<<n-lcps(s1,s2)<<endl;
    }
	return 0;
}
