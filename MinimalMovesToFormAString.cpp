#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
        string str; cin>>str;

        int n=str.size();
        int count=0;

        int i=n-1;
        while(i>=0)
        {
            if((i+1)%2==0 && (str.substr(0,(i+1)/2) == str.substr((i/2)+1,(i+1)/2)) )
            {
                count++;
                i/=2;
            }
            else
            {
                count++;
                i--;
            }
        }
        cout << count << endl;
    }

}
