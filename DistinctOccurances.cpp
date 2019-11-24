#include <bits/stdc++.h>
using namespace std;

int subsequenceCount(string S, string T,int m,int n);
//  Driver code to check above method
int main()
{
	int t;
	cin>>t;, t)in
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;

		cout<<subsequenceCount(s,tt,s.size(),tt.size())<<endl;


	}

}
}
/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete this method*/
int subsequenceCount(string a, string b)
{
    vector<int> ans(b.size()+1);
    ans[0]=1;
    for(int i=0;i<a.size();i++)
    {
        for(int j=b.size()-1;j>=0;j--)
        {
            if(a[i]==b[j])
                ans[j+1]+=ans[j];
        }

    }
    return ans.back();
}

