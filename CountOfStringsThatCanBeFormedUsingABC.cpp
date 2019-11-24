
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll b0c0= 1;
        ll b0c1= n;
        ll b0c2= n*(n-1)/2;
        ll b1c0= n;
        ll b1c1= n*(n-1);
        ll b1c2= n*(n-1)*(n-2)/2;

        cout<<b0c0+b0c1+b0c2+b1c0+b1c1+b1c2<<endl;
    }
    return 0;
 }
