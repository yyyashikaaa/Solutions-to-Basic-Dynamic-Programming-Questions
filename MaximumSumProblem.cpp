#include<bits/stdc++.h>
using namespace std;
int max(int a ,int b,int c)
{
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;
}
int sum(int n)
{
    if(n<12)
        return n;
    else
        return max(n, sum(n/2) + sum(n/3) + sum(n/4));
}
int main()
 {
	//code
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    cout<<sum(n)<<"\n";


	}
	return 0;
}
