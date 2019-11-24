
#include<bits/stdc++.h>
using namespace std;
int min(int k,int y)
{
    if(k<y)
        return k;
    else
        return y;
}
int skip_one(int arr[],int n)
     {
         int incl=arr[0];
         int excl=0;
         int res;
         for(int i=1;i<n;++i)
         {
             res=arr[i]+min(incl,excl);
             excl=incl;
             incl=res;

         }
         return min(excl,incl);
     }
int main()
 {
	//code
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    cout<<skip_one(arr,n)<<"\n";
	}
	return 0;
}
