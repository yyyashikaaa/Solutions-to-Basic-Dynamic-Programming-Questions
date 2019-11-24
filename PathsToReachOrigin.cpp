#include<bits/stdc++.h>
using namespace std;

int findPaths(int n,int m)
{
    if(n<0 || m<0)
        return 0;
    else
    {
        if((n==1 &&m==0) || (n==0&&m==1))
            return 1;

        return findPaths(n-1,m) + findPaths(n,m-1);
    }
}
int main()
 {
	//code
	int t;cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    cout<<findPaths(n,m)<<endl;
	}
	return 0;
}
