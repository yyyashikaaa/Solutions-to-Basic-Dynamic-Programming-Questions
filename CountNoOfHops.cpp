
#include <iostream>
using namespace std;
typedef long long ll;

ll way(ll n){
    ll a[n+1];
    a[0]=1;a[1]=1,a[2]=2;
    for(int i=3;i<n+1;i++) a[i]=a[i-1]+a[i-2]+a[i-3];
    return a[n];
    //this code gives total no. of ways(not diff. hopes values) to reach to the end
}

int main() {
	int t;cin>>t;
	while(t--){
	    ll n;cin>>n;
	    cout<<way(n)<<endl;
	}
	return 0;
}
